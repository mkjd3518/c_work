#include<stdio.h>

int main(void)

{
int num1, num2, num3 ;
printf("input num1 : ");
scanf("%d", &num1);

printf("input num2 : ");
scanf("%d", &num2);

printf("input num3 : ");
scanf("%d", &num3);
int max, mid, min;

if (num1 > num2 && num1 > num3) {
	max = num1 ; 
	if (num2 > num3) {
	mid = num2 ;
	min = num3 ; 
	} else {
	mid = num3;
	min = num2;
	}
} 
if (num2 > num1 && num2 > num3) {
	max = num2 ; 
	if (num1 > num3) {
	mid = num1 ;
	min = num3 ; 
	} else {
	mid = num3;
	min = num1;
	}
} 
if (num3 > num1 && num3 > num2) {
	max = num3 ; 
	if (num2 > num1) {
	mid = num2 ;
	min = num1 ; 
	} else {
	mid = num1;
	min = num2;
	}
} 
printf("----Max :%d ---Mid  :%d ---Min  :%d\n", max,mid,min) ;
return 0;
}
