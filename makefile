CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

run: main.o bst.o
	$(CC) $(CFLAGS) -o run main.o bst.o

main.o: main.c include/stella/bst.h
	$(CC) $(CFLAGS) -c main.c

bst.o: src/bst.c include/stella/bst.h
	$(CC) $(CFLAGS) -c src/bst.c

clean:
	rm -f run *.o
