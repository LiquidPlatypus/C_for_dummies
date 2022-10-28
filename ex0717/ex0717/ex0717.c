#include <stdio.h>

int main()
{
	const int SIZE = 3;
	char personne[SIZE];

	printf("Qui etes-vous? ");
	fgets(personne, stdin);
	printf("Heureux de vous rencontrer, %s.\n", personne);
	return 0;
}