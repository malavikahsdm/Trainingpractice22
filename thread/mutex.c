#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
void *thread_fun(void *arg){
	pthread_mutex_lock(&lock);
	printf("hello from thread %d\n",*(int *)arg);
	sleep(5);
	printf("bye from thread %d\n",*(int *)arg);
	pthread_mutex_unlock(&lock);
}

int main(){
	pthread_t t1,t2;
	int a=1,b=2;
	pthread_create(&t1,NULL,thread_fun,&a);
	pthread_create(&t2,NULL,thread_fun,&b);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	
	pthread_mutex_destroy(&lock);

    return 0;
}
