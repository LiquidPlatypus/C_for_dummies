#include <stdio.h>

int main()
{
	char prenom[16];
	char nom_De_Famille[20];

	printf("Quel est votre prenom? ");
	fgets(prenom, 16, stdin);
	printf("Quel est votre nom de famille? ");
	fgets(nom_De_Famille, 20, stdin);
	printf("Ravi de vous rencontrer, %s %s\n", prenom, nom_De_Famille);

	return 0;
}