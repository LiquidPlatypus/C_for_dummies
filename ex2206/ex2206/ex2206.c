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
	fprintf(handle, "%d", scoremax);
	fclose(handle);

	return 0;
}