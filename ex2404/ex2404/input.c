#include "ex2403.h"

extern humain personne;

void remplir_struct(void)
{
	printf("Indiquez votre nom : ");
	fgets(personne.nom, 31, stdin);
	printf("Indiquez votre age : ");
	scanf("%d", &personne.age);
}