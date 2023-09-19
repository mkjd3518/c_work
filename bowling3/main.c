#include <stdio.h>
#include"board.h"

int main(void)
{
	int frameScores[11] = {0, };
	int scores[11][3] = {0, };
	
	int bonus;
	
	printBoard();
	for (int i = 1; i <= 10; ++i) {
		printf("%d frame first cast : ", i);
		scanf("%d", &scores[i][1]);
		setScore(i, 1, scores[i][1]);
		printBoard();
		
		if(i >= 2 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] != 10) {
			frameScores[i-1] = frameScores[i-2] + 10 + scores[i][1];
			//printf("%d frame score : %d\n", i-1, frameScores[i-1]);
			setFrameScore(i-1, frameScores[i-1]);
			printBoard();
			
		} else if (i >= 3 && scores[i-2][1] == 10 && scores[i-1][1] == 10) {
			frameScores[i-2] = frameScores[i-3] + 10 + scores[i-1][1] + scores[i][1];
			setFrameScore(i-2, frameScores[i-2]);
			printBoard();
		}
		
		if (scores[i][1] < 10 || i == 10) {
		printf("%d frame second cast : ", i);
		scanf("%d", &scores[i][2]);
		setScore(i, 2, scores[i][2]);
		printBoard();
		
		if (scores[i-1][1] == 10) {
			frameScores[i-1] = frameScores[i-2] + 10 + scores[i][1] + scores[i][2];
			setFrameScore(i-1,frameScores[i-1]);
			printBoard();
		}	
		
		if (scores[i][1] + scores[i][2] < 10) {
			frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2];
			setFrameScore(i,frameScores[i]);
			printBoard();
		}
		
	}
		if (i == 10 && scores[i][1] + scores[i][2] >= 10) {
			printf("%d frame third cast : ", i);
			scanf("%d", &bonus);
			setScore(i,3,bonus);
			printBoard();
		
			frameScores[i] = frameScores[i-1] + scores[i][1] + scores[i][2] + bonus;
			setFrameScore(i,frameScores[i]);
			printBoard();
		}
	
	}
	
	return 0;
}	
