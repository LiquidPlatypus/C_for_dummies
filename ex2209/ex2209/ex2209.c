#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* handle;
	int scoremax[5];
	int x;

	handle = fopen("score.dat", "r");
	if (!handle)
	{
		puts("Erreur fichier !");
		exit(1);
	}

	fread(scoremax, sizeof(int), 5, handle);
	fclose(handle);
	for (x = 0; x < 5; x++)
		printf("Meilleur score #%d: %d\n", x + 1, scoremax[x]);

	return 0;
}