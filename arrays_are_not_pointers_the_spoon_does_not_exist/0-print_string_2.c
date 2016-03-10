#include "my_functions.h"
#include <stdio.h>
void print_string_2(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  i++;
  for (int count=0; count < i/2; count++) {
    print_char(str[count]);
    str+=1;
  }
}
