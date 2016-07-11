#include <stdio.h>

void print_array(int *array, int size)
{
 int i;
 for (i=0; i<size; i++)
  printf(" %d, ", array[i]);
 printf("\n");
}
