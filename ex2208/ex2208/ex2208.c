#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* handle;
	int scoremax[5];

	handle = fopen("score.dat", "w");
	if (!handle)
	{
		puts("Erreur fichier !");
		exit(1);
	}

	for(int x = 0; x < 5; x++)
	{
		printf("Indiquez votre meilleur score : ");
		scanf("%d", &scoremax);
		fwrite(&scoremax, sizeof(int), 1, handle);
	}
	fclose(handle);

	return 0;
}