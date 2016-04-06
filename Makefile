CCC = gcc
CFLAGS = -W -Wall -pedantic -std=c11
SRC = main

all:
	@echo "\nGerando o executável:"
	$(CC) main.c -o main $(CFLAGS)

clear:
	rm -rf $(SRC)