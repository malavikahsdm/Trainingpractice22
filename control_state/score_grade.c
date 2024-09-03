#include<stdio.h>
int main()
{
	int score;
	printf("enter the score:");
	scanf("%d",&score);
	if (score>=90 && score<=100){
		printf("you get grade A");
	}
	else if (score >= 80 && score <= 89){
		printf("you get grade B");
	}

	else if (score >= 70 && score <= 79){
		printf("you get grade C");
	}

	else if (score >= 60 && score <= 69){
		printf("you get grade D");
	}

	else if (score<60){
		printf("you are Fail");
	
	}
	else{
		printf("you can not enter grater than 100 and less than 0 marks");
	}
	return 0;
}
