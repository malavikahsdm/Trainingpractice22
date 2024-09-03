#include<stdio.h>
int main()
{
	float weight;
	float height;
	printf("weight:");
	scanf("%f",&weight);
	printf("height:");
	scanf("%f",&height);
	float bmi = weight/(height*height);
	printf("bmi:%f\n",bmi);
    if (bmi<18.5){
	 printf("underweight");
	}
	else if(bmi>=18.5 && bmi <= 24.9){
		printf("normal weight");
	}
	else if (bmi >= 25 && bmi <= 29.9){
	 printf("overweight");
	 }
	else if (bmi >=30){
	 printf("obesity");
	 }
	return 0;
}

