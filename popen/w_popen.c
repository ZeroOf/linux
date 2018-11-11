#include <stdio.h>
#include <unistd.h>

int main()
{
	char buf[] = "now is the best time";
	FILE* fp = popen("cat>./tmp/write_popen.txt","w");
	fwrite(buf,sizeof(buf),1,fp);
	pclose(fp);
	return 0;
}
