CC = gcc
CFLAGS = -Wall -g -std=c99 -pedantic -Iincludes -c -o

BIN = bin/
SRC = src/


all:
	$(CC) $(CFLAGS) $(BIN)spiral.o $(SRC)spiral.c
	$(CC) $(BIN)spiral.o -o $(BIN)spiral

clean:
	rm $(BIN)*.o
