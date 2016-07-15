/* create hash table */
#include "hashtable.h"
#include <stdlib.h>
#include <stdio.h>

HashTable *ht_create(unsigned int size)
{
  HashTable *new_table;
  unsigned int i;
  
  if (size < 1)
  {
    return NULL;
  }
  /* create space in memory for new node */
  new_table = malloc(sizeof(HashTable));
  if (new_table == NULL)
  {
    return NULL;
  }
  new_table->array = malloc(sizeof(List *) *size);
  if (new_table->array == NULL)
  {
    return NULL;
  }
  for (i=0; i<size; i++)
  {
    new_table->array[i] = NULL;
  }
  new_table->size = size;
  return new_table;
}
