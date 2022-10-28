#include <stdio.h>

int main()
{
	char ouiOuNon;

	printf("Voulez vous continuer? Y ou N?\n");
	scanf_s("%c", &ouiOuNon);

	if (ouiOuNon == 'Y' || ouiOuNon == 'y')
		printf("En cours...\n");
	else if (ouiOuNon == 'N' || ouiOuNon == 'n')
		printf("D'accord, arret en cours...\n");
	else
		printf("aucune option associee.\n");
	return 0;
}