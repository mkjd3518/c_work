#include <stdio.h>

int main(void)
{

	int nums[10] = {50, 30, 100, 10, 20, 60, 40, 70, 90, 80};
	
	//int sum =0;
	int max = nums[0];
	
	for (int i = 1; i < 10; ++i) {
		if (max < nums[i]) {
		    max = nums[i];		
		} 
		
	
} 
	
	printf("sum : %d\n", max);
	return 0;
}
