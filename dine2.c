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

int main()
{
	printf("\n\n\n*****DINING PHILOSOPHER*****\n\n\n");
	
	sem_initialize(5,&chopstick);
	thread_create(5);
	dining_phil(5,&chopstick);

return 0;
}
