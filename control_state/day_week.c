/*Write a program that asks the user to enter the number of days and then converts that value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days. Display results in the following format: 18 days are 2 weeks, 4 days.*/
#include<stdio.h>
int main(){
	int days;
	int weeks;
	int rest_days;
	printf("enter the value of days:");
	scanf("%d",&days);
	if(days%7 ==0 ){
	    weeks = days / 7;
		printf("%d days are %d weeks, 0 days",days,weeks);}
	else{
	    rest_days = days % 7;
		weeks = days / 7;
		printf( "%d days are %d weeks,%d days",days,weeks,rest_days);
        }	    
    return 0;
}
