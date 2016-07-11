/* frees allocated memory from the hash */
#include "hashtable.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
unsigned int hash(const char *key, unsigned int size);

void ht_free(HashTable *hashtable)
{
  unsigned int i;
  List *tmp;
  tmp = NULL;

  for (i = 0; i < hashtable->size; i++)
  {
    while (hashtable->array[i] != NULL)
    {
      free (hashtable->array[i]->key);
      free (hashtable->array[i]->value);
      tmp = hashtable->array[i]->next;
      free (hashtable->array[i]);
      hashtable->array[i]=tmp;
    }
    free(hashtable->array);
    free(hashtable);
  }
}
