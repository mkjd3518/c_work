#include<stdio.h>

int main(void)
{
	long long sum = 0;
	
	int i = 1;
	while (i <=1000000) {
		sum = sum + i;
		++i;
	}	
		printf("sum[1, 1000000] : %lld\n", sum);
return 0;
}
