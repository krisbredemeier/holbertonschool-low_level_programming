CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
FILES = 1-copy_content.o

all: 1-copy_content

0-print_content: 1-copy_content.c
	$(CC) $(CFLAGS) 1-copy_content.c -o 1-copy_content

clean:
	rm -f 1-copy_content.o 1-copy_content

re: clean all
