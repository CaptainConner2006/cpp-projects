#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size;
  printf("enter size: ");
  scanf("%d", &size);

  int *a = calloc(size, sizeof(int));

  for(int i = 0; i < size; i++)
  {
    a[i] = i; 
    printf("%d ", a[i]);
  }
  printf("\na: %p\n", a);

  a = realloc(a, sizeof(int) * (size + 5));

  for(int i = 0; i < (size + 5); i++)
  {
    a[i] = 9;
    printf("%d ", a[i]);
  }

  //int *save = a;
  free(a);
  a = NULL; //just for reassurance

  //printf("save: %p\n", save);

  return 0;
}
