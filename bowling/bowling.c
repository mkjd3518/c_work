#include <stdio.h>
int main(void)
{
	int frameScore[11] ={0, };
	
	// 1 ~ 9 frame
	int scores[10][3] = {0, };
	for (int i =1; i<= 9; ++i) {
		printf("%d frame first cast : ", i);
		scanf("%d", &scores[i][1]);
		
		if (i >= 2 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] != 10) {
		int bonus = scores[i][1];
		frameScore[i - 1] = frameScore[i-2] + 10 + bonus;
		printf("%d frame Score : %d\n", i-1, frameScore[i-1]);
		
	} else if (i >= 3 && scores[i-2][1] == 10 && scores[i-1][1] == 10) {
		int bonus = scores[i-1][1] + scores[i][1];
		frameScore[i-2] = frameScore[i-3] + 10 + bonus;
		printf("%d frame Score : %d\n", i-2, frameScore[i-2]);
	}
		
		if (scores[i][1] != 10) {
			printf("%d frame second cast : ", i);
			scanf("%d", &scores[i][1]);
		}
			if(i >= 2 && scores[i-1][1] == 10) {
			int bonus = scores[i][1] + scores[i][2];
			frameScore[i-1] = frameScore[i-2] + 10 + bonus;
			printf("%d frame Score : %d\n", i-1, frameScore[i-1]);
			
		}
		if(scores[i][1] + scores[i][2] < 10) {
			frameScore[i] = frameScore[i-1] + scores[i][1] + scores[i][2];
			printf("%d frame Score : %d\n", i, frameScore[i]);
		// calculate score
		}
	}	
	// 10frame
	int score10[4] = {0, };
		printf("%d frame first cast : ", 10);
		scanf("%d", &score10[1]);
		
		if (scores[9][1] + scores[9][2] == 10 && scores[9][1] != 10) {
			frameScore[9] = frameScore[8] + 10 + score10[1];
			printf("%d frame Score : %d\n", 9, frameScore[9]);
			
		} else if (scores[8][1] == 10 && scores[9][1] == 10) {
			frameScore[8] = frameScore[7] + 10 + 10 + score10[1];
			printf("%d frame Score : %d\n", 8, frameScore[8]);
		}	
	
		printf("%d frame second cast : ", 10);
		scanf("%d", &score10[2]);
		
		if (scores[9][1] == 10) {
			frameScore[9] = frameScore[8] + 10 +score10[1] + score10[2];
			printf("%d frame Score : %d\n", 9, frameScore[9]);
		}
		
		if (score10[1] + score10[2] < 10) {
			frameScore[10] = frameScore[9] + score10[1] + score10[2];
			printf("%d frame Score : %d\n", 10, frameScore[10]);
		
		} else {
			printf("%d frame third cast : ", 10);
			scanf("%d", &score10[3]);
			
			frameScore[10] = frameScore[9] + score10[1] + score10[2] + score10[3];
			printf("%d frame Score : %d]n", 10, frameScore[10]);		
	}
	
	return 0;
}
