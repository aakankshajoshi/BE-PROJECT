# include<stdio.h>
# include<pthread.h>
# include<stdlib.h>
# include<unistd.h>
# include<ctype.h>
# include<sys/types.h>
# include<sys/wait.h>
# include<semaphore.h>
# include<sys/sem.h>
#include <sys/ipc.h>
#include <sys/shm.h>
# include "dine.h"

sem_t chopstick[5];
pthread_t a_thread[100];

void *thread_func(int no)
{
	int i,iteration=5;

	for(i=0;i<iteration;++i)
	{
		sem_wait(&chopstick[no]);
		sem_wait(&chopstick[(no+1)%5]);

		printf("\nPhilosopher %d –> Begin eating",no);
		sleep(1);
		printf("\nPhilosopher %d –> Finish eating\n",no);

		sem_post(&chopstick[no]);
		sem_post(&chopstick[(no+1)%5]);
	}

	pthread_exit(NULL);
}

void sem_initialize(int n,sem_t *chop)
{
	int i,res;
	
	for(i=0;i<n;++i)
	{
		res=sem_init(&chop[i],0,0);
		if(res==-1)
		{
			perror("semaphore initialization failed");
			exit(1);
		}
	}
	//return &chopstick
}

void thread_create(int n)
{

	int i,res;

	for(i=0;i<n;++i)
	{
		res=pthread_create(&a_thread[i],NULL,thread_func,(int*) i);
		if(res!=0)
		{
			perror("semaphore creation failed");
			exit(1);
		}
	}
}

void dining_phil(int n,sem_t *chop)
{
	int i,res;
	for(i=0;i<n;++i)
	{
		sem_post(&chop[i]);
	}

	for(i=0;i<n;++i)
	{
		res=pthread_join(a_thread[i],NULL);
		if(res!=0)
		{
			perror("semaphore join failed");
			exit(1);
		}
	}

	printf("\n \nthread join succesfull\n");

	for(i=0;i<n;++i)
	{
		res=sem_destroy(&chop[i]);
		if(res==-1)
		{
			perror("semaphore destruction failed");
			exit(1);
		}
	}
	exit(0);
}

