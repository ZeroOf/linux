#include <unistd.h>
#include <stdio.h>
#include <wait.h>

int main()
{
	pid_t pid;
	pid = fork();
	if(0 == pid)
	{
		printf("I am child, mypid = %d, myppid = %d\n",getpid(),getppid());
		return 1;
	}
	else
	{
		sleep(5);
		printf("I am parent,mypid = %d, mychildpid = %d\n",getpid(),pid);
		pid_t cpid;
		cpid = wait(NULL);
		printf("cpid = %d\n",cpid);
		return 0;
	}
}
