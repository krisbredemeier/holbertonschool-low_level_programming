CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
FILES = 2-print_permissions.o
TARGET = 2-print_permissions
SOURCES = 2-print_permissions.c

all: $(TARGET)

0-print_content: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(FILES) $(TARGET)

re: clean all
