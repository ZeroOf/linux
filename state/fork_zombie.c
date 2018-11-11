#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	if(0 == pid)
	{
		printf("I am child, mypid = %d, myppid = %d\n", getpid(), getppid());
	}
	else
	{
		printf("I am parent,mypid = %d, mychildpid = %d\n", getpid(), pid);
		while(1);
	}
	return 0;
}
