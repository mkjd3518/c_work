#include <stdio.h>

int main(void)
{
	for(int i = 0; i < 5; ++i ) {
		for(int j = 0; j<5; ++j) {
			if(j==i || i + j ==4) {
			printf("*");		
		}
		else {
			printf(" ");
		}	
	}		
	
	printf("\n");
}

return 0;
}
