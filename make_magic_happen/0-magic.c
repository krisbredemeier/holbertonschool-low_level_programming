#include <stdio.h>

int main(void) {
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  *(p+5) = 98;
  
<<<<<<< HEAD

=======
>>>>>>> 715f26a3aaebe5d54ec86e5117dabcd0792a0b72
  printf("a[2] = %d\n", a[2]);
  return (0);
}
