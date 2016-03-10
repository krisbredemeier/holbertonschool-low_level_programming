#include "my_functions.h"
#include <stdio.h>
void print_string_half(char *str)
{
  int i =0;
  while (str[i] != '\0')
  i++;
  int n = i - (i/2);
  str+=n;
  for (int count=0; count < i/2; count++) {
    print_char(*(str));
    str+=1;
  }
}
