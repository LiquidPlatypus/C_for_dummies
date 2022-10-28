#include <stdio.h>

#define TAILLE 3

int main()
{
	char president[TAILLE][8] = {
		"Sarkozy",
		"Coty",
		"Grevy"
	};
	int x, index;

	for (x = 0; x < TAILLE; x++)
	{
		index = 0;
		while (president[x][index] != 0)
		{
			putchar(president[x][index]);
			index++;
		}
		putchar('\n');
	}
	
	return 0;
}