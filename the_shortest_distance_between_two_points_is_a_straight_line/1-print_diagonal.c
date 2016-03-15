/*prints diagonally*/
#include "my_functions.h"
void print_diagonal(int n) {

int i, j;
for (i=1;i<=n;i++) {
  for (j=1; j<=i; j++)
  print_char(' ');
  print_char('\\');
  print_char('\n');
  }
  print_char('\n');
}
