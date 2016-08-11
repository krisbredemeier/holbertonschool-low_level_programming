#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * path_exists - function that check if a path is present in a N-ary tree
 *
 * tree is the address of the root node of the Tree
 * path is an array of string
 *  - The string at the index i can be the content of one of the
 *    node of the tree at the depth i
 *  - It will always be NULL terminated, you can assume it
 * Your function must return 1 if all the element of path are present
 *  in the tree and if for an element of path at the index i is present
 *  in one of the node at the depth i.
 * And of course, all the nodes must be linked to form a path
 */


int path_exists(NTree *tree, char **path)
{
  List *ptr;
  int i;

  for (i = 1; path[i] != NULL; i++)
  {
    ptr = tree->children;
    if (ptr == NULL)
    {
      return 0;
    }
    while (strcmp(ptr->node->str, path[i]) != 0)
    {
      if (ptr->next == NULL)
      {
        return 0;
      }
      ptr = ptr->next;
    }
    tree = ptr->node;
  }
  return 1;
}
