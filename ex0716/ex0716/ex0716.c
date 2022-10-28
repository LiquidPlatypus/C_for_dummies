#include <stdio.h>

int main()
{
	char personne[10];

	printf("Qui etes-vous? ");
	fgets(personne, 10, stdin);
	printf("Heureux de vous rencontrer, %s.\n", personne);
	return 0;
}