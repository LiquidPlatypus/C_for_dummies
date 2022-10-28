#include <stdio.h>

#define TAILLE 6

int main()
{
	int	tabulles[] = { 95, 60, 6, 87, 50, 24 };
	int	interne, externe, temp, x;

	puts("Tableau de depart :");
	for (x = 0; x < TAILLE; x++)
		printf("%d\t", tabulles[x]);
	putchar('\n');

	for (externe = 0; externe < TAILLE - 1; externe++)
	{
		for (interne = externe + 1; interne < TAILLE; interne++)
		{
			if (tabulles[externe] > tabulles[interne])
			{
				temp = tabulles[externe];
				tabulles[externe] = tabulles[interne];
				tabulles[interne] = temp;
			}
		}
	}

	puts("Tableau apres tri :");
	for (x = 0; x < TAILLE; x++)
		printf("%d\t", tabulles[x]);
	putchar('\n');

	return 0;
}