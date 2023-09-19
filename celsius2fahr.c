#include<stdio.h>

	int main(void)
{
	int celsius;
	//celsius = 36;
	scanf("%d" , &celsius);
	
	double fahr;
	fahr = 9.0 / 5.0 * celsius + 32 ;
	
	printf("celsius: %d ---> fahr: %.2f\n", celsius, fahr);
 return 0;
 }
