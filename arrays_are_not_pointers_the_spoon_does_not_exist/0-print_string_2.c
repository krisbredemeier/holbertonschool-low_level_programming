/*function that prints one char out of 2 of a string*/
#include "my_functions.h"

void print_string_2(char *str)
{
  while (*str) {
    print_char(*str++);
    if (*str) {
      str++;
    }
  }
}
