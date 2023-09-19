#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int lotto[7] ;
	srand(time(NULL)); //time -->seed
	lotto[0] = rand()%45 + 1; 
	for (int i = 1; i < 7; ++i) {
		lotto[i] = rand() % 45 + 1; //1~45 nansu generate
		for (int j = 0; j < i; ++j) {
			while (lotto[i] == lotto[j]){
				   lotto[i] = rand()%45 + 1;	
			}
		}
	}
	
	printf("lotto generate: \n");
   
	for (int i= 0; i < 7; ++i) {
		printf("%d ",lotto[i]);
	}	
	printf("\n");
	return 0;


}
