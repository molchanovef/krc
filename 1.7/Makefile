CC=gcc

SRCS = $(wildcard *.c)
EXE = $(SRCS:.c=)

all: $(EXE)

.c:
	$(CC) $(CPFLAGS) $< -o $@

clean:
	rm $(EXE)
	
