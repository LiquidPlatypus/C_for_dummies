#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fh;
	int ch;

	fh = fopen("hello.txt", "r");	//Mode lecture
	if (fh == NULL)
	{
		puts("Ouverture du fichier impossible !\n");
		exit(1);
	}

	while ((ch = fgetc(fh)) != EOF)
		putchar(ch);
	fclose(fh);

	return 0;
}