#include <stdio.h>

#define TAILLE 4

int main()
{
	struct scores
	{
		char nomj[32];
		int score;
	};
	struct scores joueurs[4];
	int x, temp, interne, externe;

	for (x = 0; x < 4; x++)
	{
		printf("Indiquez le joueur %d : ", x + 1);
		scanf_s("%s", joueurs[x].nomj);
		printf("Indique son score : ");
		scanf_s("%d", &joueurs[x].score);
	}

	puts("Infos de joueur");
	printf("#\tNom\tScore\n");

	for (externe = 0; externe < TAILLE - 1; externe++)
	{
		for (interne = externe + 1; interne < TAILLE; interne++)
		{
			if (joueurs[externe].score < joueurs[interne].score)
			{
				temp = joueurs[externe].score;
				joueurs[externe].score = joueurs[interne].score;
				joueurs[interne].score = temp;
			}
		}
	}
	for (x = 0; x < 4; x++)
	{
		printf("%d\t%s\t%5d\n", x + 1, joueurs[x].nomj, joueurs[x].score);
	}

	return 0;
}