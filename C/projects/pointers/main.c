#include <stdio.h>
#include <stdlib.h>


int main()
{
  //double pointers (let me cook)
  int x = 5;
  int *px = &x;
  int **p2x = &px;
  printf("%p\n", &x);
  printf("%p\n", &*px);
  printf("%p\n", &**p2x);
  
  return 0;
}
