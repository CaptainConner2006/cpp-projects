#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
  int int_a = *((int*) a);
  int int_b = *((int*) b);

  if(int_a == int_b)
  {
    return 0;
  }
  else if (int_a < int_b)
  {
    return -1;
  }
  else 
  {
    return 1;
  }
}

int main()
{
  int numbers[] = {7,5,6,1,2,3,9,8};
  int size = sizeof(numbers) / sizeof(*numbers);

  qsort(numbers, size, sizeof(int), compare);
  
  for(int i = 0; i < size; i++)
  {
    printf("%d", numbers[i]);
  }
}
