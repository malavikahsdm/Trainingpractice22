/* Write a C program that takes an integer input from the user and prints whether it is positive, negative, or zero.*/
#include<stdio.h>
int main()
{
	int number;
	printf("enter number:");
	scanf("%d",&number);
	if (number > 0){
		printf("number is positive");
	}
	else if( number < 0){
		printf("number is negative");
	}
	else {
		printf("number is 0");
	}
	return 0;
}

