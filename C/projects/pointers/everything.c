#include <stdio.h>

struct House 
{
  int sqMeters;
  int bedrooms;
  int bathrooms;
};

//pass-by-reference function
void getHousePrice(struct House* ptrHouse)
{
  float price = ptrHouse->sqMeters * 1000 + ptrHouse->bedrooms * 10000 + ptrHouse->bathrooms * 5000;
  printf("price: $%.2lf", price);
}

int main()
{
  /*POINTERS
  int nums[] = {1,2,3,4,5};
  for(int i = 0; i < 5; i++)
  {
    printf("%d\n", nums[i]);
    printf("%p\n", &nums[i]);
  }
  */
  struct House myHouse = {145, 3, 2}; 
  struct House* ptrHouse = &myHouse;

  printf("square meters: %d\n", ptrHouse->sqMeters); 
  printf("bedrooms: %d\n", ptrHouse->bedrooms);
  printf("bathrooms: %d\n", ptrHouse->bathrooms);

  getHousePrice(ptrHouse);


  /*POINTER ARITHMATIC 
  char text[] = "hello world";
  char* pText = text;

  pText++;//steps pointer by 1 byte
  pText += 5;//steps pointer by 5 bytes
  printf("%d\n", pText[0]);
  */

  /*DOUBLE POINTER
  char* ptr = "hello world";
  char** ptr1 = &ptr;

  printf("\n%p", *ptr);
  printf("\n%p", *ptr1);
  */
  return 0;
}
