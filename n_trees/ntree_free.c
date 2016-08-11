#include "tree.h"
#include <stdlib.h>

/*
 * ntree_free - function that free an entire N-ary tree
 */

void ntree_free(NTree *tree)
{
 List *ptr;

 for (ptr = tree->children; ptr != NULL; ptr = ptr->next)
 {
   ntree_free(ptr->node);
   free(ptr);
 }
 free(tree->str);
 free(tree);
}
