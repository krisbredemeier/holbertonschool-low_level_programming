/* puts hash */
#include "hashtable.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ht_put(HashTable *hashtable, const char *key, const char *value);

unsigned int hash(const char *key, unsigned int size)
{
  unsigned int hash;
  unsigned int i;

  hash = 0;
  i = 0;
  while (key && key[i])
  {
    hash = hash + key[i];
    ++i;
  }
  hash = hash % size;
  return (hash);
}

int ht_put(HashTable *hashtable, const char *key, const char *value)
{
  List *new_list;
  unsigned int hashval = hash(key, hashtable->size);
  new_list = malloc(sizeof(List));
  if (new_list == NULL)
  {
    return 1;
  }

  new_list->key = strdup(key);
  new_list->value = strdup(value);
  new_list->next = NULL;

  if (hashtable->array[hashval] == NULL)
  {
    hashtable->array[hashval] = new_list;
  } else if (hashtable->array[hashval] != NULL)
  {
    new_list->next = hashtable->array[hashval];
    hashtable->array[hashval] = new_list;
  }
  return 0;
}
