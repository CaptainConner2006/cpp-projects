#include <stdio.h>
#include <stdlib.h>

void mem_hog(int size);

int main()
{
  int *a = calloc(10, sizeof(int));

  for(int i = 0; i < 10; i++)
  {
    a[i] = 10 - i;
    printf("%d\n", a[i]);
  }
  printf("%p", a);
  int *save = a;
  free(a);

  for(int i = 0; i < 10; i++)
  {
    printf("save[%d] = %d\n", i, save[i]);
  }

  return 0;
}
