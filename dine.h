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

void sem_initialize(int n,sem_t *chop);
void thread_create(int n);
void dining_phil(int n,sem_t *chop);
