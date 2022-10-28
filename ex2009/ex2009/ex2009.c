#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct actions {
		char symbole[5];
		int quantite;
		float cours;
	};
	struct actions* invest;

	// Creation de la structure en memoire
	invest = (struct actions*)malloc(sizeof(struct actions));
	if (invest == NULL)
	{
		puts("Erreur malloc()");
		exit(1);
	}

	// Affectation des valeurs
	strcpy_s(invest->symbole, sizeof(invest), "GOOG");
	invest->quantite = 100;
	invest->cours = 801.19;

	// Affichage
	puts("Portefeuille d'actions");
	printf("Symbole\tQte\tCours\tValeur\n");
	printf("%-6s\t%5d\t%.2f\t%.2f\n", \
		invest->symbole,
		invest->quantite,
		invest->cours,
		invest->quantite* invest->cours);

	return 0;
}