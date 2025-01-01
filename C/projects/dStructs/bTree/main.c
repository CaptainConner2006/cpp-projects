#include <stdio.h>
#include <stdlib.h>

struct treeNode {
  int parent;
  struct treeNode *left;
  struct treeNode *right;
} treeNode;

struct treeNode *newnode(int parent){
  struct treeNode *n = malloc(sizeof(struct treeNode));
  n->parent = parent;
  n->left = NULL;
  n->right = NULL; 
  return n;
}

int main(){
  struct treeNode *root = newnode(0);
  root->parent = 0;
  root->left = newnode(1);
  root->right = newnode(2);

  printf("root value is %d\n", root->parent);
  printf("left child value is %d\n", root->left->parent);
  printf("right child value is %d\n", root->right->parent);

  return 0;
}
