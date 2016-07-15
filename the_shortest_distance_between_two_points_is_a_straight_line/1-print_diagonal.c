/*prints diagonally*/
#include "my_functions.h"
void print_diagonal(int n) {

int i, j;
if (n<=0) {
  print_char('\n');
}
for (i=1;i<=n;i++) {
  for (j=1; j<=i-1; j++)
  print_char(' ');
  print_char('\\');
  print_char('\n');
  }
}
