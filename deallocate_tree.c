#include <stdio.h>
#include <stdlib.h>
#include "deallocate_tree.h"

int deallocate_tree(struct Tree_Node * tree) {
  //  struct Tree_Node* headNode = (struct Tree_Node*)malloc(sizeof(struct Tree_Node)); 
   if(tree == NULL) {
       return -1;
   } else {
       deallocate_tree(tree -> right);
       deallocate_tree(tree -> left);
       free(tree);
   }
}