#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 10

int main(void)
{
	int question[3], answer[3] ;
	int i =1, check, retry, strike =0, ball;
	
	srand((unsigned int)time(NULL));
	
	question[0] = rand() % 10; 
	
	while (i < 3) {
		question[i] = rand() % 10;
		for(check = 0; check < i; check++) {
			if(question[check] == question[i]) 
				break;
		}
		
			if (check == i) i++;
		}
		
		printf("game start!\n");
		
		for (retry = 0; retry < LIMIT && strike < 3; retry++) {
		
		printf("[%dtry] 3number choice : ", retry + 1);
			scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
			
			strike = ball = 0;
			for (i = 0; i<3; i++) {
				for (check = 0; check < 3; check++) {
				
					if (question[i] == answer[check]) {
				
					if (i== check) strike++;
					else ball++;
			}
		}
	}
	
	printf("question: %d strike, %d ball!\n\n", strike, ball);
	}
	
	if (strike ==3) printf("you win!\n");
	else printf("you lose!\n");
	
	return 0;
}				
				
				
	
	
