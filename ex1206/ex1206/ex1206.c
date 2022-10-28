#include <stdio.h>

int main()
{
	float tabBourseFin[] = { 14450.06, 14458.62, 14539.14, 14514.11, 14452.06 };

	puts("Fermeture bourse\n");
	for (int x = 0; x < 5; x++)
	{
		printf("Jour %d: %.2f\n", x + 1, tabBourseFin[x]);
	}

	return 0;
}