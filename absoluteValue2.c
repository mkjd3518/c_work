#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	//int result = num or -num;
	int result;
	if (num >= 0) {
		result = num;
	} else {
		result = -num;
	}
	
	printf("absolute value : %d\n", result);
return 0;
}
