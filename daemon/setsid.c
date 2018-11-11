#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid = 0;
	pid = fork();
	if(0 == pid)
	{
		printf("I am child, mypid = %d, myppid = %d,mypgid = %d,mysid = %d\n", getpid(),getppid(), getpgid(0),getsid(0));
		setsid();
		printf("I am child, mypid = %d, myppid = %d,mypgid = %d,mysid = %d\n", getpid(),getppid(), getpgid(0),getsid(0));
		while(1);
	}
	else
	{
		
		printf("I am parent, mypid = %d, mychildpid = %d,mypgid = %d,mysid = %d\n", getpid(),pid, getpgid(0),getsid(0));
	}
	while(1);
}
