#include <stdio.h>

int main()
{
	char primo, secundo;

	printf("Initiale de votre prenom : ");
	primo = getchar();
	printf("Initiale de votre nom de famille : ");
	secundo = getchar();
	printf("Vos initiales sont '%c' et '%c'\n", primo, secundo);

	return 0;
}