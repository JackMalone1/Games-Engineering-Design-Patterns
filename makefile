.DEFAULT_GOAL:= build
fileName := sampleapp
files := "./src/*.cpp"
CC = g++

LINKER_FLAGS  = -lmingw32 -lSDL2main -lSDL2
build:
	@echo "Build started"
	g++ -o ${fileName} ${files} -I. ${LINKER_FLAGS}
	

clean:
	@echo "Cleaning up"
	rm *.o
	rm *.s
