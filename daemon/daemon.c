#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

int main()
{
	if(fork())
	{
		exit(0);
	}
	setsid();
	chdir("/");
	umask(0);
	int i;
	for(i = 0;i<3; ++i)
	{
		close(i);
	}
	while(1);
}
