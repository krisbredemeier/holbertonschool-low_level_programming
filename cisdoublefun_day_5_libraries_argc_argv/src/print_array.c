#include "holbertonschool.h"

/* print each element of an array of integers */
void print_array(int *a, int n)
{
  int i;

  for (i = 0; i < n - 1; i++)
    {
      print_number(a[i]);
      print_char(',');
      print_char(' ');
    }

  print_number(a[n - 1]); /* print the last element */
  print_char('\n');
}
