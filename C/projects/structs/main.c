#include <stdio.h>
#include <string.h>

struct Struct
{
  int id;
  char name[];
};

int main()
{
  int size = 5;
  struct Struct arrayStruct[size];

  for(int i = 0; i < size; i ++)
  {
    arrayStruct[i].id = i + 1;
    strcpy(arrayStruct[i].name, "User");
  }
  for(int i = 0; i < size; i++)
  {
    printf("Element %d: ID = %d, Name = %s\n", i + 1, 
           arrayStruct[i].id, 
           arrayStruct[i].name);
  }

  return 0;
}
