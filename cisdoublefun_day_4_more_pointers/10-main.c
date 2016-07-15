#include <stdio.h>
int main (char *argv[])
{
  int i;

  i = 0;

  if (argv[i] > 1)
  {
  printf("%s\n", argv[i]);
  i ++;
  }
  return 0;
}
