#include <stdio.h>
#include <stdlib.h>

struct Node {
  int head;
  struct Node *left;
  struct Node *right;
} node

struct Node *newNode(int head) {
  struct Node *n = malloc(sizeof(struct Node));
  n->head = head;
  n->left = NULL;
  n->right = NULL;
  return n;
}

int main() {
  int num = 0;
  struct Node *root = newNode(num);
  root->head = num;
  root->left = newNode(num+1);
  root->right = newNode(num+2);

  printf(" %d\n", root->head);
  printf("%d  ", root->left->head);
  printf("%d\n", root->right->head);

  

  return 0;
}
