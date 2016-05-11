CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
FILES = 3-cat.o
TARGET = 3-cat
SOURCES = 3-cat.c

all: $(TARGET)

0-print_content: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(FILES) $(TARGET)

re: clean all
