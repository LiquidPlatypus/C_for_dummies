#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Suis-je trop longue pour vous ?";

	printf("La chaine \"%s\" mesure %u.\n", string, sizeof(string));
	printf("Et une taille de %lu.\n", strlen(string));

	return 0;
}