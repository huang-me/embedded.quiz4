CC = gcc
EXEC = ancestor hamming_distance
FLAG = -Wall -g

all: $(EXEC)

ancestor: ancestor.c
	$(CC) $^ -o $@ $(FLAG)

hamming_distance: hamming_distance.c
	$(CC) $^ -o $@ $(FLAG)

clean: $(EXEC)
	rm -f $(EXEC)
