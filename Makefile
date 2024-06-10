CC=gcc

all: main

main: $(wildcard *.c)
	$(CC) -L ./headers -o $@ $^