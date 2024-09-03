#include<stdio.h>
#define PI 3.14
int main()
{
	float radius;
	printf("radius of circle:");
	scanf("%f",&radius);
	//area
	printf("area of circle:%f \n",PI*radius*radius);
	printf("circumference of circle:%f \n", 2*PI*radius);
	return 0;
	}
