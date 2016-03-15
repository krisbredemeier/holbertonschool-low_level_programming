#include <stdio.h>
int strings_compare(char *s1, const char *s2);

void reverse_array(int *a, int n);
void print_array(int *a, int n);

int main(void)
{
  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

  print_array(a, sizeof(a) / sizeof(int));
  reverse_array(a, sizeof(a) / sizeof(int));
  print_array(a, sizeof(a) / sizeof(int));
  return (0);
}
