#include <stdio.h>

int main()
{
	char* fruits[] = {
		"melon",
		"banane",
		"poire",
		"pomme",
		"noix",
		"raisin",
		"myrtille"
	};
	int x;

	for (x = 0; x < 7; x++)
	{
		while (putchar(*(*(fruits + x))++))
			;
		putchar('\n');
	}

	return 0;
}