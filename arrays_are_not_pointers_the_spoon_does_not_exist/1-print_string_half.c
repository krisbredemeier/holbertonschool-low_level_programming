/*function that prints half of a string*/
#include "my_functions.h"
int print_char(char c);

void print_string_half(char *str) {
  int i;

  for (i = 0; *str++; i++) {}
  for (i /= -2, str--; i; i++) {
    print_char(str[i]);
  }
}
