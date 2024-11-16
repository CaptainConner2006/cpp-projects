#include <stdio.h>

void addition(int a, int b, int *target){
	*target = a + b;
	
	return;
}

int main(){
	int x = 10;
	int y = 15;
	int answer;
	
	addition(x, y, &answer);
	printf("%d\n", answer);
	
	return 0;
}
