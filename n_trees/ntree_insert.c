#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int recursive_insert(NTree *tree, List *list, NTree *this_node, char **parents, char *data, int insert);

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
  NTree *this_node;
  NTree *that_node;
  int insert;
  List *list;

  that_node = NULL;

  this_node = malloc(sizeof(NTree));
  if (this_node == NULL) /*if root node is empty create it */
  {
    return 1;
  }
  this_node->str = strdup(data);
  this_node->children = NULL;
  if (*tree == NULL)
  {
    *tree = this_node;
  }
  else
  {
    list = malloc(sizeof(List));
    if (list == NULL)
    {
      return 1;
    }
    list->next = NULL;
    list->node = that_node;
    insert = 0;
    this_node = *tree;
    return recursive_insert(*tree, list, this_node, parents, data, insert+1);
  }
  return 0;
}

int recursive_insert(NTree *tree, List *list, NTree *this_node, char **parents, char *data, int insert)
{
  List *this_list;
  int compare;

  this_list = NULL;
  this_list = this_node->children;
  if (this_node == NULL)
  {
    this_node->children = list;
    return 0;
  }
  if (this_node != NULL && parents[insert] == NULL)
  {
    list->next = this_list;
    this_node->children = list;
    return 0;
  }
  while (this_list != NULL)
  {
    this_node = this_list->node;
    compare = strcmp(this_node->str, parents[insert]);
    if (compare == 0)
    {
      insert = insert + 1;
      return recursive_insert(tree, list, this_node, parents, data, insert);
    }
    this_list = this_list->next;
  }
  return 0;
}
