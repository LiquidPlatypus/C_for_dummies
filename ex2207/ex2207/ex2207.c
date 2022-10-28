#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* handle;
	int scoremax;

	handle = fopen("score.dat", "w");
	if (!handle)
	{
		puts("Erreur fichier !");
		exit(1);
	}

	printf("Indiquez votre meilleur score : ");
	scanf("%d", &scoremax);
	fwrite(&scoremax, sizeof(int), 1, handle);
	fclose(handle);

	return 0;
}