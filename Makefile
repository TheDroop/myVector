CFLAGS=-std=c11 -Wall
CC=clang

all:
	$(CC) test.c $(CFLAGS) -o vectorTester

clean:
	rm -f vectorTester
