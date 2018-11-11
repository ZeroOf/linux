#include <stdio.h>
#include <stdlib.h>
#include "../common/tlpi_hdr.h"

int main()
{
	int fd;
	char template[] = "/tmp/somestringXXXXXX";

	fd = mkstemp(template);
	if(fd == -1)
		errExit("mkstemp");
	printf("Generated filename was: %s\n", template);
	unlink(template);

	if(close(fd) == -1)
		errExit("close");
	exit(EXIT_SUCCESS);
}
