/*function that returns the number of node in a list*/
#include <stdlib.h>
#include "list.h"

int list_size(List *list)
{
  List *node;
  int size;

  size = 0;
  node = list;
  while (node != NULL)
  {
    size++;
    node = node->next;
  }
  return(size);
}
