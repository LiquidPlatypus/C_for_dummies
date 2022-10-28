#include <stdio.h>

#define TAILLE 5

void afficherTablo(int tablo[]);
void incremTablo(int tablo[]);

int main()
{
	int n[] = { 1, 2, 3, 5, 7 };

	puts("Votre tableau avant incrementation :");
	afficherTablo(n);
	puts("Votre tableau apres incrementation :");
	incremTablo(n);
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

void incremTablo(int tablo[])
{
	int x;

	for (x = 0; x < TAILLE; x++)
		tablo[x] += 1;
}