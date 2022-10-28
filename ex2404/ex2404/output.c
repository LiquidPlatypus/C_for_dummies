#include "ex2403.h"

extern humain personne;

void montrer_struct(void)
{
	printf("Vous vous appelez %s", personne.nom);
	printf("Vous avez %d ans.\n", personne.age);
}