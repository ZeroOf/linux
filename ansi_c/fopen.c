#include <stdio.h>

int main(int argc,char * argv[])
{
	if(argc != 2)
	{
		printf("filename please\n");
		return -1;
	}
	FILE *fp;
	fp = fopen(argv[1],"ab+");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}
}
