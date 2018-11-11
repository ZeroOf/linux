#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	FILE* fp = popen("cat ./tmp/write_popen.txt", "r");
	char buf[512] = {0};
	while(fgets(buf,sizeof(buf),fp))
	{
		puts(buf);
	}
	pclose(fp);
	return 0;
}
