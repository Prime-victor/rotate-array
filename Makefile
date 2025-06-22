CC = gcc
CFLAGS = -Wall -O2

all: main

main: main.c rotate_extra_space.c rotate_in_place.c
	$(CC) $(CFLAGS) main.c rotate_extra_space.c rotate_in_place.c -o main

clean:
	rm -f main
