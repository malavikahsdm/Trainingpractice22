/*Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digits.*/
#include<stdio.h>
int main()
{
	int number;
	int sum = 0;
	int i;

	printf("enter a positive number:");
	scanf("%d",&number);
	while(number!=0)
	{
		i = number % 10;
		sum = sum + i;
		number = number / 10;
 	}
	printf("sum of the number is :%d\n ",sum);
	return 0;
}
	
		

