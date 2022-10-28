#include <stdio.h>

int main()
{
	int rebours;

	for (rebours = 25; rebours >= 0; rebours = rebours - 1)
	{
		printf("%d\t", rebours);
	}
	putchar('\n');
	return 0;
}