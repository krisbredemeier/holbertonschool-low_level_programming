#include <stdlib.h>
#include <string.h>
#include "queue.h"

/*
 * push_queue - a function that enqueue an element in a list
 * @head - contains first (head) node
 * @str - string inside node
 *
 * Your function must return 1 if something went wrong, 0 otherwise
 * You must store a copy of the string passed
 *  as a parameter in the new element of the Queue
 * You are allowed to use strdup
 *
 * step 1: check if queue is full
 * step 2: if queue is not full, increment rear pointer to point
 *  to point next empty space
 * step 3: add data element to the queue location, where rear is pointing
 * step 4: return success
 *
 */

int push_queue(Queue **head, char *str)
{
  Queue *tmp = queue;

  if (tmp == NULL)
  {
    tmp = (Queue *)malloc(sizeof(Queue));
    *head = tmp;
  }
  else
  {
    while (tmp->next != NULL)
      tmp = tmp->next;
    tmp->next = (Queue *)malloc(sizeof(Queue));
    tmp = tmp->next;
  }
  tmp->next = NULL;
  tmp->str = strdup(str);
  return 0
}
