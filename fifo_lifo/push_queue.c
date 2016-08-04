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
 */

int push_queue(Queue **head, char *str)
{
  Queue *tmp = queue;

  if (tmp == NULL){
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
