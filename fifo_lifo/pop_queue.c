#include "queue.h"
#include <string.h>
#include <stdlib.h>

/*
 * pop_queue - a function that dequeued an element from a queue
 * @top - contains top node
 *
 * This function returns the str stored in the first element of the queue
 * If the queue is empty, just return NULL
 * The element pop'd must be removed from the queue
 *
 * step 1: check if queue is empty
 * step 2: if queue is not empty, access data where front is pointing
 * step 3: increment front pointer to point to next available data element
 * step 4: return success
 *
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
