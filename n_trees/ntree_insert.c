#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
NTree *find_node(NTree *, char **);

/**
 * ntree_insert - function that insert a node in a N-ary tree
 * @tree - pointer to the address of the root node
 * @parents - array of string
 * @data - string to duplicate and to store inside the new node
 *
 * tree is a pointer to the address of the root node.
 * If it's NULL, the Tree is empty,
 *  so the node to insert will become the root node
 *
 * parents is an array of string -
 * The string at the index i will be the content of one of the node
 *  of the tree at the depth i. You can assume it, there will be no trick
 * It will always be NULL terminated, you can assume it.
 * If tree points to NULL (the tree is empty),
 *  parents can either be NULL or an array with the
 * first and only element equals to NULL
 * The first element will be the content of the root node.
 * The second element will be the content of one of the children
 *  of the root node, and so on ...
 * Each element of parents will be present in the Tree,
 *  you don't have to worry about that.
 *
 * data is the string to duplicate and to store inside the new node
 * The way you add an element to a List of children doesn't matter.
 * You can either add it at the beginning or at the end of the List.
 * The function should return 0 on success, or 1 if something went wrong
 * You are allowed to use strdup, and strcmp (and malloc, of course)
 */

int ntree_insert(NTree **tree, char **parents, char *data)
{
  NTree *that_node;
  List *ptr;

  if (*tree == NULL)
  {
    *tree = (NTree *) malloc(sizeof(NTree));
    if (*tree == NULL)
    {
      return 1;
    }
    (*tree)->str = strdup(data);
    (*tree)->children = NULL;
    return 0;
  }
  else
  {
    that_node = find_node(*tree, parents);
    ptr = that_node->children;
    that_node->children = (List *) malloc(sizeof(List));
    that_node->children->next = ptr;
    that_node->children->node = (NTree *) malloc(sizeof(NTree));
    that_node->children->node->str = strdup(data);
    that_node->children->node->children = NULL;
  }
  return 0;
}

NTree *find_node(NTree *tree, char **parents)
{
  List *ptr;
  int i;

  for (i = 1; parents[i] != NULL; i++)
  {
    ptr = tree->children;
    while (strcmp(ptr->node->str, parents[i]) != 0)
    {
      ptr = ptr->next;
    }
    tree = ptr->node;
  }
  return tree;
}
