#include <unistd.h>
#include <stdio.h>

int main()
{
	execl("./a.out","a.out","4", "3",NULL);
	printf("after execl");
	return 0;
}
