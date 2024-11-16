//dynamic memory allocation
#include <stdio.h>

int main(){
	char name[32];
	
	printf("name?\n");
	scanf("%s", &name);
	printf("hello %s\n", name);
	
	return 0;
}
