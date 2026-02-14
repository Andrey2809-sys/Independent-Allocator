CC = gcc
CFLAGS = -o

MAIN = main.c
C_FILE = include/ialloc.c
OUTPUT = build/main
OUTPUT_LIB = build/ialloc.o

all:
	$(CC) $(MAIN) $(C_FILE) $(CFLAGS) $(OUTPUT)
	$(CC) -c $(C_FILE) -o $(OUTPUT_LIB)

run:
	$(OUTPUT)
