#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 6

int tri_Tab(int tab)
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
}

int random_Nbr()
{
	int r[40], x;

	srand((unsigned)time(NULL));
	for (x = 0; x < 40; x++)
		r[x] = rand() % 100 + 1;
	return r;
}

int main()
{
	int r[40];
	
	random_Nbr(r);
	tri_Tab(r);

	return 0;
}