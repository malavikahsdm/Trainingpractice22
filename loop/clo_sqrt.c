/*Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root. For example, if the user enters 8, then the program reports 9. If the user enters 18, then the program reports 16.The program should work  for any number having one to seven*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int closest;
	int sqrt_n;

	printf("enter a number:");
	scanf("%d",&n);
	sqrt_n = (int)sqrt(n);
	if (n <= 0){
		printf("enter positive number");
		return 1;
		}
	int low_sqrt = (sqrt_n) *(sqrt_n);
	int up_sqrt = (sqrt_n+1)*(sqrt_n+1);
	if ((n - low_sqrt) <=(up_sqrt - n)){
		closest = low_sqrt;
		printf("closest sqrt is: %d",closest);
	}
	else
	{
		closest = up_sqrt;
		printf("closest sqrt is :%d",closest);
	}
	return 0;
	}
