#include <stdio.h>

int main(void)
{
	int man, woman;
	scanf("%d  %d", &man, &woman);
			
	//double manRatio = 100.0 * man / (man + woman);
	//double womanRatio = 100.0 * woman / (man + woman);
	double manRatio = (double)man / (man + woman) * 100 ;
	double womanRatio = (double)woman / (man + woman) * 100 ;
	printf("manRatio : %.2f%%\t  womanRatio: %.2f%%\n" , manRatio, womanRatio);
	// print
	return 0;
}
