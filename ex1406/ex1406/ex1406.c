#include <stdio.h>

int main()
{
	struct scores
	{
		char nomj[32];
		int score;
	};
	struct scores joueurs[4];
	int x;

	for (x = 0; x < 4; x++)
	{
		printf("Indiquez le joueur %d : ", x + 1);
		scanf_s("%s", joueurs[x].nomj);
		printf("Indique son score : ");
		scanf_s("%d", &joueurs[x].score);
	}

	puts("Infos de joueur");
	printf("#\tNom\tScore\n");
	for (x = 0; x < 4; x++)
	{
		printf("%d\t%s\t%5d\n", x + 1, joueurs[x].nomj, joueurs[x].score);
	}

	return 0;
}