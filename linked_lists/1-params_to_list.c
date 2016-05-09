/*function that allocates a new node and links it to the to a list*/
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int str_len(char *str);
char *string_dup(char *str);
int add_node(List **list, char *content);

List *params(int ac, char **av)
{
  List *list;
  int i;

  i = 0;
  list = NULL;
  while (i < ac)
  {
    add_node(&list, av[i]);
    i++;
  }
  return list;
}

/*finds the length of a string and returns an int*/
int str_len(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return (i);
}

/*duplicates a string*/
char *string_dup(char *str)
{
  char *s2;
  int i = 0;
  s2 = malloc(sizeof(char)*str_len(str));
  if(s2 == NULL)
    {
      return NULL;
    }
    while(*(str+i) != '\0'){
      s2[i] = *(str+i);
      i+=1;
    }
  return s2;
}

int add_node(List **list, char *content)
{
  List *node;
  List *start;

  start = *list;
  if(start == NULL)
  {
    start = malloc(sizeof(List));
    if(start == NULL)
    {
      return (1);
    }
    else {
      start->str = string_dup(content);
      start->next = NULL;
      *list = start;
      return (0);
    }
  }
      else {
      node = malloc(sizeof(List));
      if (node == NULL)
      {
        return (1);
      }
      else {
      node->str = string_dup(content);
      node->next = *list;
      *list = node;
      return (0);
    }
  }
  return (1);
}
