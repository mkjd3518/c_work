#include <stdio.h>
#define PI 3.14
int main(void)
{
	int radius;
	printf("input radius : ");
	scanf("%d" , &radius);
	double area = PI * radius * radius;
	printf("area: %.2f\n ", area);
return 0;
}
