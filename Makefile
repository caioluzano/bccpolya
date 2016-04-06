CC=gcc
CFLAGS=-W -Wall -pendantic -std=cll
LFLAGS=-lm

SRC=$(wildcard *.c)
BIN=$(SRC:.c=)

.PHONY: all clean

all: $(BIN)

clean:
	@rm -f $(BIN)

%:%.c
	@echo -n " Gerando executável $@"
	@$ (CC) $< -o $@ $(CFLAGS) $(LFLAGS) && echo "[OK]"
