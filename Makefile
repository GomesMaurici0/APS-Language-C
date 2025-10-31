CC = gcc
CFLAGS = -Wall -O2
SRC = src/main.c src/geodata.c src/quicksort.c src/mergesort.c src/insertionsort.c
TARGET = ordenacao

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
