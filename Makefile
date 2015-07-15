CC=gcc
CFLAGS=-O3 -march=native -g
DEPS=quicksort.h handle_ferr.h ggets.h
OBJ=quicksort.o handle_ferr.o ggets.o qsort.o swapper.o

all: qsort swapper

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

qsort: qsort.o quicksort.o handle_ferr.o ggets.o
	$(CC) -o qsort qsort.o quicksort.o handle_ferr.o ggets.o

swapper: swapper.o
	$(CC) -o swapper swapper.o

clean:
	rm qsort swapper $(OBJ)