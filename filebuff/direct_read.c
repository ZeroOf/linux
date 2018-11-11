#define _GNU_SOURCE
#include <fcntl.h>
#include <malloc.h>
#include "../common/tlpi_hdr.h"

int main(int argc, char *argv[])
{
	int fd;
	ssize_t numRead;
	size_t length, alignment;
	off_t offset;
	void *buf;

	if(argc < 3 || strcmp(argv[1], "--help") == 0)
	{
		usageErr("%s file length [offset [alignment]]\n", argv[0]);
	}

	length = getLong(argv[2], GN_ANY_BASE, "length");

}
