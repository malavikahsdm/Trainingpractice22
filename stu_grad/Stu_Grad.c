#include<stdio.h>
int main()
{
	int score;

	printf("score:");
	scanf("%d",&score);
	
	if (90<=score<100){
	 printf("grade:A");
	 }
	else if(60<=score<70){
	 printf("grade:D");
	}
	else if(70<=score<80){
	 printf("grade: C");
	 }
	 
	else if(80<=score<90){
	 printf("grade: B");
	}
	else{
	printf("grade:F");}
	return 0;
	}


