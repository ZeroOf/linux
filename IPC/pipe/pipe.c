#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
	int pip[2];
	pipe(pip);
	if(fork())
	{
		close(pip[0]);	
		printf("I am parent!\n");
		write(pip[1],"hello",5);
		wait(NULL);
		close(pip[1]);
	}
	else
	{
		close(pip[1]);
		printf("I am child\n");
		char buf[128] = {0};
		read(pip[0],buf,sizeof(buf));
		printf("I am child, %s\n",buf);
		close(pip[0]);
	}
}
