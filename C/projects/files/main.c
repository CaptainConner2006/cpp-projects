#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *fptr;

  char dataToWrite[50] = "conner is fortnite esports pro";
  char dataToRead[50];

  fptr = fopen("file.txt", "r");

  if(fptr == NULL)
  {
    printf("file failed to open");
    exit(0);
  }
  else {
    printf("file succesfully opened\n");

    /*
    if(strlen(dataToWrite) > 0)
    {
      fputs(dataToWrite, fptr);
      fputs("\n", fptr);
    }
    */
    
    while(fgets(dataToRead, 50, fptr) != NULL)
    {
      printf("%s", dataToRead);
    }

    fclose(fptr);

    printf("dataToWrite succesfully read from file.txt and closed file.txt\n");
  }

  return 0;
}
