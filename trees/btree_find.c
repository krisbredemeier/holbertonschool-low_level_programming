#include "tree.h"
#include <stdlib.h>
#include <string.h>

/**
 * btree_find - function that look for an element in a binary tree
 * @tree: pointer to pointer
 * @str: str that will find a matching node
 *
 * must return the first node whose element correspons to
 * the str parameter
 * if the element is not found, the function must returns NULL
 * to compare elements, you are allowed to use the function strcmp
 */

 BTree *btree_find(BTree *tree, char *str)
{
  int compare;

  if (tree == NULL)
  {
    return NUll;
  }
  compare = strcmp(str, tree->str);
  if (compare > 0)
  {
    return btree_find(tree->right, str);
  }
  else if (compare < 0)
  {
    return btree_find(tree->left, str);
  }
  else
  {
    return tree;
  }
}
