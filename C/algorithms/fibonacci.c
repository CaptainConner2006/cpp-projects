//fibonacci
#include <stdio.h>

int main(){
	int nums;
	printf("enter amount of nums: ");
	scanf("%d", &nums);
	
	int a = 0, b = 1, result;
	
	for(int i = 1; i <= nums; i++){
		printf("%d ", a);
		result = a + b;
		a = b;
		b = result;
	}
	
	return 0;
}
