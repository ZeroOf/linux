#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf("Parent process id : %d\n", getpid());
	pid_t iRet = fork();
	if(iRet < 0)
	{
		printf("fork gone wrong!\n");
	}
	else if(0 == iRet)
	{
		printf("child process pid: %d ppid: %d\n", getpid(), getppid());
	}
	else
	{
		printf("parent process success, child id:%d\n",iRet);
		sleep(1);
	}
	return 0;
}
