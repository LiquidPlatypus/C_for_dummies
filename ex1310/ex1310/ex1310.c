#include <stdio.h>
#include <string.h>

int main()
{
	char primo[40];
	char secundo[20];

	printf("Indiquez votre prenom : ");
	scanf_s("%s", primo);
	printf("Et votre nom de famille : ");
	scanf_s("%s", secundo);
	strcat(primo, secundo);
	printf("Ravi de vous voir, %s!\n", primo);

	return 0;
}