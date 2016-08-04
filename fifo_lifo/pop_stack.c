#include "stack.h"
#include <string.h>
#include <stdlib.h>

/*
 * pop_stack - a function that pop an element from a Stack
 * @top - contains top node
 *
 * This function returns the str stored in the first element of the stack
 * If the stack is empty, just return NULL
 * The element pop'd must be removed from the stack
 */

char *pop_stack(Stack **top)
{
 Stack *new_node;
 char *str;

 if (*top == NULL)
  return ("NULL");
  new_node = *top;
  str = strdup(new_node->str);
  *top = new_node->next;
  free(new_node->str);
  free(new_node);
  return (str);
}
