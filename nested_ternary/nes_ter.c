#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;
	scanf("%d",&num1);
	
	scanf("%d",&num2);
	scanf("%d",&num3);
	int max = (num1>num2) ?(( num1>num3)? num1 :num3):((num2>num3)?num2:num3);
	printf("%d",max);
	return 0;
	}
