#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid = fork();
	if(0 != pid)
	{
		printf("I am parent, my pid = %d\n",getpid());
		fflush(stdout);
	}
	else
	{
		printf("I am child, my pid = %d, my ppid = %d\n", getpid(),getppid());
		while(1);
	}
	return 0;
}
