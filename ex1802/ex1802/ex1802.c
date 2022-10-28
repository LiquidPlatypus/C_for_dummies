#include <stdio.h>

int main()
{
	char string[] = "Suis-je trop longue pour vous ?";

	printf("La chaine \"%s\" mesure %u.\n", string, sizeof(string));

	return 0;
}