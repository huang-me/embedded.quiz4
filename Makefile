CC = gcc
EXEC = ancestor hamming_distance my_ancestor fizzbuzz
OUTPUT = *.out.*
FLAG = -Wall -g

all: $(EXEC)

ancestor: ancestor.c
	$(CC) $^ -o $@ $(FLAG)

fizzbuzz: fizzbuzz.c
	$(CC) $^ -o $@ $(FLAG)

my_ancestor: my_ancestor.c
	$(CC) $^ -o $@ $(FLAG)

hamming_distance: hamming_distance.c
	$(CC) $^ -o $@ $(FLAG)

clean: $(EXEC)
	rm -f $(EXEC) $(OUTPUT)
