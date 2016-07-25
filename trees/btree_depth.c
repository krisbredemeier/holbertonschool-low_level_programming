#include "tree.h"
#include <stdlib.h>
#include <string.h>

/**
 * btree_depth_r - function that find the depth of a binary tree- recursively
 * @tree
 *
 * the depth of the tree must be returned by your function
 * if the tree is empty, the depth is -1
 */
int btree_depth(BTree *tree);

 int btree_depth_r(BTree *tree)
 {
   int left;
   int right;

   left = 1;
   right = 1;
   if (tree == NULL)
   {
     return 0;
   }
   left = left+btree_depth_r(tree->left);
   right = right+btree_insert_r(tree->right);
   if (left > right)
   {
     return left;
   }
   else
   {
     return right;
   }
 }

 /**
  * btree_depth - function that find the depth of a binary tree
  * @tree
  *
  * the main body of the function
  * but depends on recursive fucnctiong
  */
 int btree_depth(BTree *tree)
 {
   if (tree == NULL)
   {
     return -1;
   }
   return btree_depth_r(tree) -1;
 }
