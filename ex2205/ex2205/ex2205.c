#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fh;

	fh = fopen("hello.txt", "a");	// Mode ajout
	if (fh == NULL)
	{
		puts("Ouverture du fichier impossible !");
		exit(1);
	}

	fprintf(fh, "Texte apparu plus tard.\n");
	puts("Texte apparu.");
	fclose(fh);

	return 0;
}