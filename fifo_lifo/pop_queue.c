#include "queue.h"
#include <string.h>
#include <stdlib.h>

/*
 * pop_queue - a function that dequeued an element from a queue
 * @top - contains top node
 * This function returns the str stored in the first element of the queue
 * If the queue is empty, just return NULL
 * The element pop'd must be removed from the queue
 */

char *pop_queue(Queue **top)
{
  Queue *node;
  char *str;

  if (*top == 0)
    return ("NULL");

  node = *top;
  str = strdup(node->str);
  *top = node->next;
  free(node->str);
  free(node);
  return (str);
}
