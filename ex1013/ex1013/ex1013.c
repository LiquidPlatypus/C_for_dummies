#include <stdio.h>

void limiter(int stop);
int verifier();

int main()
{
	int s = 0;

	verifier();
	limiter(s);
	return 0;
}

void limiter(int stop)
{
	int x;

	for (x = 0; x <= 100; x = x + 1)
	{
		printf("%d ", x);
		if (x == stop)
		{
			puts("Vous gagnez !");
			return;
		}
	}
	puts("Je gagne !");
}

int verifier()
{
	int y;

	printf("Indiquez une valeur pour stopper (0-100): ");
	scanf_s("%d", &y);
	if (y > 0 && y < 100)
	{
		limiter(y);
		return 1;
	}
	else if (y <= 0 || y >= 100)
	{
		printf("vous devez choisir une valeur entre 0 et 100. Fin du programme.");
		return 0;
	}
}