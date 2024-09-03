#include<stdio.h>
#define hr 60
int main(){
	float minute;
	float hour;
	int tm;
	float time;

	printf("enter 1 to take time as input in hour otherwise enter any number\n");
	printf("enter tm:");
	scanf("%d",&tm);
	if (tm == 1){
		printf("enter time which is in hour:");
		scanf("%f",&time);
		minute = time*hr;
		printf("time is converted in minute from hour :%f minute\n",minute);
	}
	else{
			
		printf("enter time which is in minute:");
		scanf("%f",&time);
		hour = time/hr;
		printf("time is converted in hour from minute :%f hour\n",hour);
		}
}
		

