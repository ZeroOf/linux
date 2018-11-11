
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
	size_t len;
	off_t offset;
	int fd,ap,j;
	char * buf;
	ssize_t numRead, numWritten;
	if(argc < 3 || strcmp(argv[1],"--help") == 0)
}
