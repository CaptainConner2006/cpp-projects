#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
  int n1, n2, n3;
};

int main()
{
  struct threeNum num;
  FILE *fptr;
  if((fptr = fopen("C:\\C-CPP\\C\\program.bin", "rb")) == NULL)
  {
    printf("error opening file");
    exit(1);
  }

  int flag = 0;

  for(int i = 0; i < 5; ++i)
  {
    num.n1 = i;
    num.n2 = 5 * i;
    num.n3 = 5 * i + 1;
    flag = fwrite(&num, sizeof(struct threeNum), 1, fptr);
  }

  if(!flag)
  {
    printf("write operation failure\n");
  }
  else {
    printf("write operation success\n");
  }

  for(int i = 0; i < 5; ++i)
  {
    fread(&num, sizeof(struct threeNum), 1, fptr);
    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
  }
  fclose(fptr);

  return 0;
}
