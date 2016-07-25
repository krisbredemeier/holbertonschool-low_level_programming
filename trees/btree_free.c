#include "tree.h"
#include <stdlib.h>
#include <string.h>

/**
 * btree_free - function that free a binary tree
 * @tree
 *
 * this function frees the binary tree - it's pretty simple!
 */

void btree_free(BTree *tree)
{
  if (tree == NULL) return;
  btree_free(tree->left);
  btree_free(tree->right);
  free(tree->str);
  free(tree);
}
