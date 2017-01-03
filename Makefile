SHELL=/bin/sh
CFLAGS=-Wall -g -std=c99 -Isrc -lncurses
objects=main.o
exe=./bin/curse-you

all: $(objects)
	$(CC) $(CFLAGS) -o $(exe) $(objects)
	$(exe)

clean:
	rm -fr $(exe) $(objects)

main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c
