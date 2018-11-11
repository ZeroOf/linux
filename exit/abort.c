#include <stdio.h>
#include <stdlib.h>

void print()
{
	printf("I am print\n");
	abort();
}

int main()
{
	print();
	printf("I am main\n");
	return 0;
}
