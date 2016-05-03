

CC = gcc -c
CFLAGS = -Wall -Wextra -Werror -pedantic
FILES = print_char.o positive_or_not.o print_number.o absolute.o uppercase.o lowercase.o first_digit.o swap_int.o str_len.o print_string.o strings_compare.o uppercase_string.o cap_string.o power.o square_root.o

all: $(FILES)
	ar -rc libholbertonschool.a $(FILES)


print_char.o: src/print_char.c
	$(CC) $(CFLAGS) src/print_char.c
positive_or_not.o: src/positive_or_not.c
	$(CC) $(CFLAGS) src/positive_or_not.c
print_number.o: src/print_number.c
	$(CC) $(CFLAGS) src/print_number.c
absolute.o: src/absolute.c
	$(CC) $(CFLAGS) src/absolute.c
uppercase.o: src/uppercase.c
	$(CC) $(CFLAGS) src/uppercase.c
lowercase.o: src/lowercase.c
	$(CC) $(CFLAGS) src/lowercase.c
first_digit.o: src/first_digit.c
	$(CC) $(CFLAGS) src/first_digit.c
swap_int.o: src/swap_int.c
	$(CC) $(CFLAGS) src/swap_int.c
str_len.o: src/str_len.c
	$(CC) $(CFLAGS) src/str_len.c
print_string.o: src/print_string.c
	$(CC) $(CFLAGS) src/print_string.c
strings_compare.o: src/strings_compare.c
	$(CC) $(CFLAGS) src/strings_compare.c
uppercase_string.o: src/uppercase_string.c
	$(CC) $(CFLAGS) src/uppercase_string.c
cap_string.o: src/cap_string.c
	$(CC) $(CFLAGS) src/cap_string.c
power.o: src/power.c
	$(CC) $(CFLAGS) src/power.c
square_root.o: src/square_root.c
	$(CC) $(CFLAGS) src/square_root.c

clean:
	rm -f print_char.o positive_or_not.o print_number.o absolute.o uppercase.o lowercase.o first_digit.o swap_int.o str_len.o print_string.o strings_compare.o uppercase_string.o cap_string.o power.o square_root.o

re: clean all
