#include <stdio.h>
#include <unistd.h>

int main(int argc, char * argv[])
{
	if(argc != 2)
	{
		printf("filename please!\n");
		return -1;
	}
	int ret;
	ret = unlink(argv[1]);
	if(-1 == ret)
	{
		perror("unlink");
		return -1;
	}
	return 0;
}
