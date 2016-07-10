/* gets hash */
#include "hashtable.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
unsigned int hash(const char *key, unsigned int size);

char *ht_get(HashTable *hashtable, const char *key)
{
  unsigned int hashval = hash(key, hashtable->size);
  int x;

  List *tmp;
  x = 1;

  tmp = hashtable->array[hashval];
  while (tmp != NULL)
  {
    if (strcmp(tmp->key, key) == 0)
    {
      x = 0;
      break;
    }
    tmp = tmp->next;
  }
  if (x == 0)
  {
    return tmp->value;
  }
  return NULL;
}
