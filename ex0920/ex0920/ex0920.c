#include <stdio.h>

int main()
{
	int cmptr;

	cmptr = 0;
	for(;;)
	{
		printf("%d, ", cmptr);
		cmptr = cmptr + 1;
		if (cmptr > 50)
			break;
	}
	putchar('\n');
	return 0;
}