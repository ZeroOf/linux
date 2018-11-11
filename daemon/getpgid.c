#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	if(0 == pid)
	{
		printf("I am child, mypid = %d, myppid = %d, mypgid = %d\n", getpid(),getppid(),getpgid(0));
		while(1);
	}
	else
	{
		printf("I am parent, mypid = %d, mychildpid = %d, mypgid = %d \n", getpid(), pid, getpgid(0));
		while(1);
	}
	return 0;
}
