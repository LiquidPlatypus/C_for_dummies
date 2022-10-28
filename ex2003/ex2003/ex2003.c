#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *tab, x;

	tab = (int*)malloc(sizeof(int) * 3);
	if (tab == NULL)
	{
		puts("Allocation memoire impossible.");
		exit(1);
	}

	for (x = 0; x < 3; x++)
	{
		*(tab + x) = (x + 1) * 100;
		printf("%d\n", *(tab + x));
	}

	return 0;
}