/*.Write a C program to determine whether a given positive integer is an Armstrong number. An Armstrong number (also known as a narcissistic number or pl    uperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. Your program should:
  2
  3 i. Prompt the user to enter a positive integer.
  4 ii. Determine the number of digits in the number.
  5 iii. Calculate the sum of each digit raised to the power of the total number of digits.
  6 iv Compare the calculated sum to the original number to determine if it is an Armstrong number.
  7 v. Print "Armstrong number" if the number is an Armstrong number, otherwise print "Not an Armstrong number"*/
#include<stdio.h>
#include<math.h>
int main()
{ 
  int n;
  int sum =0;
      printf("Enter aa number:");
      scanf("%d",&n);
	  int count=0;
      int temp = n;
	  int number =n;
    while(n!=0){
		count = count+1;
		n = n/10;
		}
	while(temp!=0){
		int rem = temp % 10;
		sum = sum + pow(rem,count);
		temp = temp / 10;
		}
	if (sum == number){
	 	printf("number is Armstrong number");
		}
	else
	{
	    printf("number is not Armstrong number");
	}
	return 0;
}
		
        



