#include<stdio.h>
int main(){
	int *iptr;
	int a[5]={1,2,3,4,7};
	iptr = a;
	printf("%p\n",iptr);
	printf("%d\n",*iptr);
	return 0;
	
}
