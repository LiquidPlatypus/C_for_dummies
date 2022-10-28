#include <stdio.h>

#define TAILLE 6

int main()
{
	char president[TAILLE][11] = {
		"Sarkozy",
		"Coty",
		"Grevy",
		"Mitterrand",
		"Chirac",
		"Pompidou"
	};
	int x;

	for (x = 0; x < TAILLE; x++)
		puts(president[x]);

	return 0;
}