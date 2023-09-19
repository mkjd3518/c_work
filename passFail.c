#include <stdio.h>

int main(void)
{ 
	int score, isPass;
	
	printf("input score :  ");
	scanf("%d", &score);
	
	isPass = score >= 60 ;
	printf("%d is pass ->%d \n   ",score, isPass);
	

	

		
	


	return 0;
}
