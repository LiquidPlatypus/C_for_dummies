#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* test;

	test = fopen("blorfus", "w");
	if (!test)
	{
		puts("Creation du fichier impossible.");
		exit(1);
	}
	fclose(test);
	puts("Fichier creer");
	if (rename("blorfus", "wambooli") == -1);
	{
		puts("Impossible de renommer");
		exit(1);
	}
	puts("Nom du fichier modifier");

	return 0;
}