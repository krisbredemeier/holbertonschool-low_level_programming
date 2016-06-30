#include <stdlib.h>
#include "list.h"

int add_begin_dl_list(List **, char *);
int add_end_dl_list(List **, char *);
List *get_tail(List **list);
int print_char(char c);


int add_end_dl_list(List **list, char *str)
{
  List *newNode;
  newNode = malloc(sizeof(List));
    if (newNode == NULL) {
      return 1;
    }
  newNode->str = strdup(str);
  if (newNode->str == NULL) {
    return 1;
  }

  if (*list == NULL) {
    newNode->prev = NULL;
    *list = newNode;
  }
  else {
  newNode->prev = tail(list);
  newNode->prev->next = newNode;
  }
  newNode->next = NULL;
  return 0;
}

int add_begin_dl_list(List **list, char *str)
{
  List *newNode;
  newNode = malloc(sizeof(List));
    if (newNode == NULL) {
      return 1;
    }
  newNode->str = strdup(str);
  if (newNode->str == NULL) {
    return 1;
  }
  newNode->next = *list;
  newNode->prev = NULL;
  if (newNode->next !=NULL) {
    newNode->next->prev = newNode;
  }
  *list = newNode;
  return 0;
}

List *get_tail(List **list)
{
  List *newNode;
  newNode = *list;
    while (newNode->next != NULL)
    {
      newNode = newNode->next;
    }
    return newNode;
}
