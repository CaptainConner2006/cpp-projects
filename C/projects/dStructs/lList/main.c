#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

int main(){
  //make list elements
  struct Node *head;
  struct Node *one = NULL;
  struct Node *two = NULL;
  struct Node *three = NULL;

  //allocate elements to the stack
  one = malloc(sizeof(struct Node));
  two = malloc(sizeof(struct Node));
  three = malloc(sizeof(struct Node));

  //fill the data of each element
  one->data = 1;
  two->data = 2;
  three->data = 3;
  
  //connect each element to the one after
  one->next = two;
  two->next = three;
  three->next = NULL;
  
  //define the head node
  head = one;

  //print elements
  struct Node *current = head;
  while(current != NULL){
    printf("%d->", current->data);
    current = current->next;
  }
  printf("NULL\n");

  return 0;
}
