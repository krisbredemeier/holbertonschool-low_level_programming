#include <stdlib.h>
#include "list.h"
#include <unistd.h>

int print_char(char c);
void print_string(char *str);
void print_list(List *list);

void print_list(List *list)
{
  int first;

  first = 1;
  if (list == NULL)
  {
    print_char('\n');
    return;
  }
  do {
    if (!first)
    {
      print_char(',');
      print_char(' ');
    }
    else {
      first = 0;
    }
    print_string(list->str);
    list = list->next;
  }
  while (list != NULL);
  print_char('\n');
}

void print_string(char *str)
{
  while (*str != '\0')
  {
    print_char(*str);
    str++;
  }
}
