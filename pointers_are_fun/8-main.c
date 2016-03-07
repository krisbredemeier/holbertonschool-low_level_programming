#include <stdio.h>

void modif_my_char_var(char *cc, char ccc)
{
  *cc = 'o';
  ccc = 'l';
}

int main(void)
{
  char c;
  char *p;

  p = &c;
  c = 'H';
  printf("Value of 'c' before the call: %d\n", c);
  printf("Address of 'c': %p\n", &c);
  printf("Value of 'p': %p\n", p);
  printf("Address of 'p': %p\n", &p);
  modif_my_char_var(p, c);
  printf("Value of 'c' after the call: %d\n", c);
  return (0);
}
