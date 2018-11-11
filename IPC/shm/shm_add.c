#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

const int N = 1000000;
int main(int argc,char * argv[])
{
	if(argc != 2)
	{
		printf("error args\n");
		return -1;
	}
	key_t key;
	key = ftok(argv[1],1);
	printf("%d\n",key);
	int shmid;
	shmid = shmget(key,4096,0600|IPC_CREAT);
	if(-1 == shmid)
	{
		perror("shmget");
		return -1;
	}

	int *p;
	p = (int*)shmat(shmid,NULL,0);
	if((int*) -1 == p)
	{
		perror("shmat");
		return -1;
	}
	bzero(p,4096);
	printf("p[0] = %d\n",p[0]);
	if(fork())
	{
		for(int i = 0; i <= N; ++i)
		{
			p[0] += 1;
		}
		wait(NULL);
		printf("%d\n",p[0]);
		if(shmctl(shmid,IPC_RMID,0) == -1)
		{
			perror("shmctl");
			return -1;
		}
	}
	else
	{
		for(int i = 0; i <= N; ++i)
		{
			p[0] += 1;
		}
		shmdt(p);
		exit(0);
	}
}
