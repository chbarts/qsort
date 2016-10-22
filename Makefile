CC=gcc
CFLAGS=-O3 -march=native -g -flto
DEPS=quicksort.h handle_ferr.h ggets.h
OBJ=quicksort.o handle_ferr.o ggets.o qsort.o swapper.o reverser.o

all: qsort swapper reverser

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

qsort: qsort.o quicksort.o handle_ferr.o ggets.o
	$(CC) -flto -o qsort qsort.o quicksort.o handle_ferr.o ggets.o

swapper: swapper.o
	$(CC) -flto -o swapper swapper.o

reverser: reverser.o
	$(CC) -flto -o reverser reverser.o

clean:
	rm qsort swapper reverser $(OBJ)
