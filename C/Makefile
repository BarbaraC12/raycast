all: build run clean

build:
	@gcc -std=c99 ./src/*.c -lSDL2 -o raycast;

run:
	@./raycast;

clean:
	@rm raycast;

re:	clean build