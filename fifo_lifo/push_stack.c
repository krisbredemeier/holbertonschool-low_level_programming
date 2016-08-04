#include "stack.h"
#include <stdlib.h>
#include <string.h>

/*
 * push_stack - function that push an element on the top of a Stack
 * @top - points to the top of the stack
 * @str - string inside of node
 *
 * Your function must return 1 if something went wrong, 0 otherwise.
 * You must store a copy of the string passed
 *  as a parameter in the new element of the Queue
 * You are allowed to use strdup
 */

int push_stack(Stack **top, char *str)
{
  Stack *new_node;

  new_node = malloc(sizeof(Stack));
  if (new_node == NULL)
    return 1;
  new_node->str = strdup(str);
  if (*top == NULL)
  {
    new_node->next = NULL;
    *top = new_node;
  }
  else
  {
    new_node->next = *top;
    *top = new_node;
  }
  return 0;
}
