#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int max;
	printf("num1:");
	scanf("%d",&num1);
	printf("num2:");
	scanf("%d",&num2);
	max = num1 > num2 ? num1 : num2;
	printf("max num is:%d",max);
	return 0;
	}
