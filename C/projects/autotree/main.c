#include <stdio.h>
#include <stdlib.h>

struct Node {
  int head;
  struct Node *left;
  struct Node *right;
} Node;

struct Node *makeNode(int head) {
  struct Node *newNode = malloc(sizeof(struct Node));
  if(!newNode) {
    printf("mem alloc error");
    exit(1);
  }
  newNode->head = head;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct Node *insert(struct Node *root, int head) {
  if(root == NULL) {
    return makeNode(head);
  }
  if(head < root->head) {
    root->left = insert(root->left, head);
  } else if(head > root->head) {
    root->right = insert(root->right, head);
  }

  return root;
}

struct Node *inOrderTraversal(struct Node *root) {
  if(root != NULL) {
    inOrderTraversal(root->left);
    printf("%d ", root->head);
    inOrderTraversal(root->right);
  }
}

void freetree(struct Node *root) {
  if(root != NULL) {
    freetree(root->left);
    freetree(root->right);
    free(root);
  }
}

int main() {
  struct Node *root = NULL;

  int values[] = {34, 64, 25, 79, 70, 42, 19, 23, 73, 10, 11, 27, 42, 82};
  int size = sizeof(values) / sizeof(values[0]);

  for(int i = 0; i < size; i++) {
    root = insert(root, values[i]);
  }

  inOrderTraversal(root);
  printf("\n");

  freetree(root);

  return 0;
}
