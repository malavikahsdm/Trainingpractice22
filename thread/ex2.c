#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

//pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void *thread_fun(void *arg){
//	pthread_mutex_lock(&lock);
	printf("hello from thread %d\n", *(int *)arg);
	sleep(3);
    printf("hello thread %d is exiting\n",*(int *)arg);
//	pthread_mutex_unlock(&lock);
    return NULL;
	}

void *thread_func(void *arg){
	
	printf("hello from thread %d\n",*(int *)arg);
	sleep(2);
	printf("exiting thread %d\n",*(int *)arg);
	return NULL;
}


int main(){
pthread_t t1,t2;
int a =1;
int b=2;
pthread_create(&t1,NULL,thread_fun,(void *)&a);
pthread_create(&t2,NULL,thread_func,(void *)&b);


pthread_join(t1,NULL);
pthread_join(t2,NULL);

//pthraed_mutex_destroy(&lock);
return 0;
}
