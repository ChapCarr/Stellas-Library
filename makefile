CC = gcc
CFLAGS = -Wall -Wextra
OBJ = main.o bst.o

run: $(OBJ)
	$(CC) $(CFLAGS) -o run $(OBJ)

main.o: main.c bst.h
bst.o: bst.c bst.h

clean:
	rm -f run $(OBJ)