CC = gcc -c
CFLAGS = -Wall -Wextra -Werror -pedantic
FILES = 0-print_content.o

all: 0-print_content

0-print_content: 0-print_content.c
	$(CC) $(CFLAGS) 0-print_content.c -o 0-print_content

clean:
	rm -f 0-print_content.o 0-print_content

re: clean all
