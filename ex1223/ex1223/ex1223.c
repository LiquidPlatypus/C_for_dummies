#include <stdio.h>

#define TAILLE 5

void afficherTablo(int tablo[]);

int main()
{
	int n[] = { 1, 2, 3, 5, 7 };

	puts("Votre tableau :");
	afficherTablo(n);
	
	return 0;
}

void afficherTablo(int tablo[])
{
	int x;

	for (x = 0; x < TAILLE; x++)
		printf("%d\t", tablo[x]);
	putchar('\n');
}