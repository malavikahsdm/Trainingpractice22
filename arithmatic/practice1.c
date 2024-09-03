/* this the program for arithmetic operation */
#include<stdio.h>
int main()
{
	int integer_1;
	int integer_2;
	printf("Take the integer_1 and integer_2 as input\n");
	scanf("%d %d\n",&integer_1,&integer_2);
	//Addition
	printf("addition of two integers:%d and %d = %d\n",integer_1,integer_2,integer_1+integer_2); 
    //Subtraction
	printf("subtraction of two integers:%d and %d = %d \n",integer_1,integer_2,integer_1-integer_2);
	//Multiplication
	printf("multiplication of two integers:%d and %d = %d\n",integer_1,integer_2,integer_1*integer_2);
	//Division
	printf("division of two integers:%d and %d = %d\n",integer_1,integer_2,integer_1/integer_2); 
	//Modulus
	printf("modulus of two integers:%d and %d = %d\n",integer_1,integer_2,integer_1%integer_2); 
	
	return 0;
	}
