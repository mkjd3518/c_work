#include <stdio.h>

int main(void)
{ 
	int score;
	
	printf("input score :  ");
	scanf("%d", &score);
	
	//isPass = score >= 60 ;
	//printf("%d is pass ->%d \n   ",score, isPass);
	if (score>=60) {
	printf("score: %d --- pass\n", score);
	} else {
	printf("score: %d --- fail\n", score);
	}

	return 0;
}
