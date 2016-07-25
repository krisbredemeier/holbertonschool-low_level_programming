#include "tree.h"
#include <stdlib.h>
#include <string.h>

/**
 * btree_insert - unction that insert a node in a binary tree
 * @tree: pointer to pointer
 * @data: str cointained in new node
 *
 * To compare elements value, you are allowed to use the function strcmp
 * You must store a copy of the data parameter in the new node.
 * You are allowed to use the function strdup
 * If anything goes wrong, your function must return 1.
 * Otherwise, it must return 0
 */

int traverse(BTree *, BTree *);

int btree_insert(BTree **tree, char *data)
{
  BTree *tmp;
  BTree *node;
  int insert;

  tmp = *tree;
  node = malloc(sizeof(BTree)); /*always allocate memory for new node */
  if (node == NULL)
    return 1;
  node->str = strdup(data);
  if (node->str == NULL)
    return 1;
  node->left = NULL;
  node->right = NULL;
  if (*tree == NULL)
    *tree = node;
  else
  {
    tmp = *tree;
    insert = traverse(tmp, node);
    if (insert == 1)
      return 1;
  }
  return 0;
}

/**
 * traverse - recursively moves through three
 * @tmp: pointer to first node
 * @node: pointer to insersed node
 */
int traverse(BTree *tmp, BTree *node)
{
  int diff;

  diff = strcmp(tmp->str, node->str); /* compare tmp to node */
  if (diff < 0 || diff == 0)
  {
    if (tmp->right != NULL)
    {
      tmp = tmp->right;
      traverse(tmp, node);
    }
    else
    {
      tmp->right = node;
      node->right = NULL;
      node->left = NULL;
    }
  }
  else
  {
      if (tmp->left != NULL)
      {
        tmp = tmp->left;
        traverse(tmp, node);
      }
      else
      {
        tmp->left = node;
        node->right = NULL;
        node->left = NULL;
      }
  }
  return 0;
}
