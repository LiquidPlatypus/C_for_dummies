#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* entrante;
	int longueur;

	entrante = (char*)malloc(sizeof(char) * 1024);
	if (entrante == NULL)
	{
		puts("Allocation memoire impossible.");
		exit(1);
	}
	puts("Sasissez du texte :");
	fgets(entrante, 1023, stdin);
	longueur = strlen(entrante);
	if (realloc(entrante, sizeof(char) * (longueur + 1)) == NULL);
	{
		puts("Nouvelle allocation impossible.");
		exit(1);
	}
	puts("Reallocation correcte.");
	puts("Vous avez saisi :");
	printf("\"%s\"\n", entrante);

	return 0;
}