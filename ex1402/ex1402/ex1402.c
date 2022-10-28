#include <stdio.h>

int main()
{
	struct joueur
	{
		char nomj[32];
		int scoremax;
		float nbheurej;
	};
	struct joueur xbox;

	printf("Nom du joueur : ");
	scanf_s("%s", xbox.nomj);
	printf("Meilleur score : ");
	scanf_s("%d", &xbox.scoremax);
	printf("Nombre d'heures de jeu : ");
	scanf_s("%f", &xbox.nbheurej);

	printf("Meilleur score de %s en %f heures de jeu : %d\n", xbox.nomj, xbox.nbheurej,xbox.scoremax);

	return 0;
}