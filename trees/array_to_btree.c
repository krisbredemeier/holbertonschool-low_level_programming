#include "tree.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_to_btree -  function that convert an array of stings into a binary tree
 * @array: pointer to pointer
 *
 * To compare elements value, you are allowed to use the function strcmp
 * You must store a copy of the array elements in your nodes.
 * You are allowed to use the function strdup
 * If anything goes wrong, your function must return NULL.
 * Otherwise it must return the address of the root node of the new binary tree.
 */

int r_insert_arrary(BTree *, char **, int);

BTree *array_to_btree(char **array)
{
  BTree *node;
  BTree *tmp;
  int i;

  i = 0;
  while (array[i] != NULL)
  {
    if (i == 0)
    {
      node = malloc(sizeof(BTree));
      if (node == NULL)
      {
        return NULL;
      }
      node->str = strdup(array[i]);
      node->left = NULL;
      node->right = NULL;
      tmp = node;
      i++;
    }
    else
    {
      r_insert_arrary(node, array, i);
      i++;
    }
  }
  return tmp;
}

int r_insert_arrary(BTree *node, char **array, int i)
{
  BTree *tree;
  tree = node;
  int compare;

  compare = strcmp(array[i], node->str);
  if (compare < 0)
  {
    if (tree->left != NULL)
    {
      return r_insert_arrary(tree->left, array, i);
    }
    tree = malloc(sizeof(BTree));
    if (tree == Null)
    {
      return 0;
    }
    tree->str = strdup(array[i]);
    tree->right = NULL;
    tree->left = NULL;
    node->left = tree;
  }
  else
    {
      if (tree->right != NULL)
        return r_insert_arrary(tree->right, array, i);
      }
      tree = malloc(sizeof(BTree));
      if (tre == NULL)
        return 0;
    }
    tree->str = strdup(array[i]);
    tree->right = NULL;
    tree->left = NULL;
    node->right = tree;
  }
return 0;
}
