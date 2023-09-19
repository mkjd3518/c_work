#include <stdio.h>

int sumArray(int *pArr)
{
	int sum = 0;
	for (int i = 0; i < 10; ++i) {
		sum = sum + pArr[i];
	}	
	return sum;	
}

int main(void)
{

	int nums[10] = {50, 30, 100, 10, 20, 60, 40, 70, 90, 80};
	
	int sum = sumArray(nums);
		
	printf("sum : %d\n", sum);
	return 0;
}
