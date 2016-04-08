#this is the start of my Makefile

CC = gcc -c
CFLAGS = -Wall -Wextra -Werror -pedantic
FILES = absolute.o cap_string.o contact_strings.o first_digit.o is_prime_number.o lowercase.o nconcat_strings.o positive_or_not.o power.o print_array.o print_number.o print_string.o reverse_array.o reverse_string.o square_root.o str_len.o string_copy.o string_ncopy.o string_to_integer.o strings_compare.o swap_int.o uppercase_string.o uppercase.o



all: $(FILES)
	ar -rc libholbertonschool.a $(FILES)
	ranlib libholbertonschool.a


absolute.o: src/absolute.c
	$(CC) $(CFLAGS) src/absolute.c

cap_string.o: src/cap_string.c
	$(CC) $(CFLAGS) src/cap_string.c

contact_strings.o: src/contact_strings.c
	$(CC) $(CFLAGS) src/contact_strings.c

first_digit.o: src/first_digit.c
	$(CC) $(CFLAGS) src/first_digit.c

is_prime_number.o: src/is_prime_number.c
	$(CC) $(CFLAGS) src/is_prime_number.c

lowercase.o: src/lowercase.c
	$(CC) $(CFLAGS) src/lowercase.c

nconcat_strings.o: src/nconcat_strings.c
	$(CC) $(CFLAGS) src/nconcat_strings.c

positive_or_not.o: src/positive_or_not.c
	$(CC) $(CFLAGS) src/positive_or_not.c

power.o: src/power.c
	$(CC) $(CFLAGS) src/power.c

print_array.o: src/print_array.c
	$(CC) $(CFLAGS) src/print_array.c

print_number.o: src/print_number.c
	$(CC) $(CFLAGS) src/print_number.c

print_string.o: src/print_string.c
	$(CC) $(CFLAGS) src/print_string.c

reverse_array.o: src/reverse_array.c
	$(CC) $(CFLAGS) src/reverse_array.c

reverse_string.o: src/reverse_string.c
	$(CC) $(CFLAGS) src/reverse_string.c

square_root.o: src/square_root.c
	$(CC) $(CFLAGS) src/square_root.c

str_len.o: src/str_len.c
	$(CC) $(CFLAGS) src/str_len.c

string_copy.o: src/string_copy.c
	$(CC) $(CFLAGS) src/string_copy.c

string_ncopy.o: src/string_ncopy.c
	$(CC) $(CFLAGS) src/string_ncopy.c

string_to_integer.o: src/string_to_integer.c
	$(CC) $(CFLAGS) src/string_to_integer.c

strings_compare.o: src/strings_compare.c
	$(CC) $(CFLAGS) src/strings_compare.c

swap_int.o: src/swap_int.c
	$(CC) $(CFLAGS) src/swap_int.c

uppercase_string.o: src/uppercase_string.c
	$(CC) $(CFLAGS) src/uppercase_string.c

uppercase.o: src/uppercase.c
	$(CC) $(CFLAGS) src/uppercase.c

clean:
	rm -f absolute.o cap_string.o contact_strings.o first_digit.o is_prime_number.o lowercase.o nconcat_strings.o positive_or_not.o power.o print_array.o print_number.o print_string.o reverse_array.o reverse_string.o square_root.o str_len.o string_copy.o string_ncopy.o string_to_integer.o strings_compare.o swap_int.o uppercase_string.o uppercase.o test

re: clean all
