#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fh;

	fh = fopen("hello.txt", "w");	// Mode d'écriture
	if (fh == NULL)
	{
		puts("Ouverture du fichier impossible !");
		exit(1);
	}

	fprintf(fh, "Je laisse une trace.\n");
	fputs("C'est mon programme qui produit ce contenu.\n", fh);
	fclose(fh);

	return 0;
}