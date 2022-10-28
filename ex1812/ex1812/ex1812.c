#include <stdio.h>

int main()
{
	int x = 18;
	int* p;

	p = &x;
	printf("%d\n", *p);

	return 0;
}