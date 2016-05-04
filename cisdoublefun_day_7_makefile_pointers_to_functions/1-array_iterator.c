#include <unistd.h>
#include <stdio.h>
int print_char(char c);

void array_iterator(int *array, int size, void (*action_func)(int))
{
  int i;

  i = 0;
  while (i<size)
  {
    (*action_func)(array[i]);
    i++;
  }
}
