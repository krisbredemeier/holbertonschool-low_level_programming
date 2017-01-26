#include "tree.h"
#include "stdio.h"

int btree_insert(BTree **tree, char *data);
void print_preorder(BTree *tree);
int test_insert();

int main() {
  test_insert();
}

int test_insert() {
  printf("The numbers should be in ascending order.\n");
  BTree *tree = NULL;
  btree_insert(&tree, "q - 1");
  btree_insert(&tree, "w - 6");
  btree_insert(&tree, "e - 2");
  btree_insert(&tree, "r - 7");
  btree_insert(&tree, "t - 8");
  btree_insert(&tree, "y - 10");
  btree_insert(&tree, "u - 9");
  btree_insert(&tree, "i - 3");
  btree_insert(&tree, "o - 4");
  btree_insert(&tree, "p - 5");
  print_preorder(tree);
  return 0;
}

void print_preorder(BTree *tree) {
  if (tree == NULL) return;
  printf("%s\n", tree->str);
  print_preorder(tree->left);
  print_preorder(tree->right);
}
