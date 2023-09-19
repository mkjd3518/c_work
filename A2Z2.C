#include <stdio.h>

int main(void)
{
	char c;
	printf("input char : ");
	scanf("%c", &c);
	
	int isTrue = (c >= 'A' &&  c <= 'Z');
	
	printf("%c is a big letter : %d\n", c, isTrue);
	return 0;
}
