/*Temperature Advice:
Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature:
Above 30: "It's hot outside, stay hydrated!"
Between 20 and 30: "The weather is nice and warm."
Between 10 and 19: "It's a bit chilly, wear a jacket."
Below 10: "It's cold outside, stay warm!"*/
#include<stdio.h>
int main()
{
	float temp;
	printf("enter temp:");
	scanf("%f",&temp);
	if (temp >= 30){
		printf(" it is hot outside,stay hydrated!");
	}
	else if (temp >= 20 && temp <= 30){
		printf("the weather is nice and warm");
	}
	
	else if (temp >= 10 && temp <= 19){
		printf("the weather is nice and warm");
	}
	else if (temp<=10){ 
	    printf("it is cold outside,stay warm!");
	}
	
	return 0;
}
