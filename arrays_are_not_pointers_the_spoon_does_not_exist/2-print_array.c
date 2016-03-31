/*function that prints each element of an array of integers.*/
#include "my_functions.h"
void print_number(int n);

void print_array(int *a, int n) {
  int i;
  for (i=0; i < n; i++) {
    print_number(a[i]);
    if (i == (n-1)) {
      break;
    }
    print_char(',');
    print_char(' ');
  }
  print_char('\n');
  }
