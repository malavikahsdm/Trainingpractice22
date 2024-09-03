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
	return 0;
	}
