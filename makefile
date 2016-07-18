CC=g++
CFLAGS=-I
DEPS = que2_header.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


que2make: que2_make.o que2_func.o
	g++ -o que2_make que2_make.o que2_func.o -I.
