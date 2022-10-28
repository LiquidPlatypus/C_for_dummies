#include "ex2403.h"
humain personne;

int main()
{
	remplir_struct();
	montrer_struct();

	return 0;
}

void remplir_struct(void)
{
	printf("Indiquez votre nom : ");
	fgets(personne.nom, 31, stdin);
	printf("Indiquez votre age : ");
	scanf("%d", &personne.age);
}

void montrer_struct(void)
{
	printf("Vous vous appelez %s", personne.nom);
	printf("Vous avez %d ans.\n", personne.age);
}