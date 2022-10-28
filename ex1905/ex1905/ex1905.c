#include <stdio.h>

int main()
{
	int nombres[10];
	int x;
	int* pn;

	pn = nombres;		// Initialise le pointeur

	// Rempli le tableau
	for (x = 0; x < 10; x++)
	{
		*pn = x + 1;
		pn++;
	}

	// Affiche le tableau
	for (x = 0; x < 10; x++)
	{
		printf("Nombres[%d] = %d, Adresse %p\n", x, nombres[x], pn);
		pn++;
	}

	return 0;
}