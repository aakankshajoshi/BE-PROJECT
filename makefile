CC=gcc
CFLAGS=-I
DEPS = dine.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< -pthread $(CFLAGS).


dinephil: dine2.o dine1.o
	gcc -o $@ dine2.o dine1.o -pthread -I.
