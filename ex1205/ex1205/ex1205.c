#include <stdio.h>

int main()
{
	int	scoremax[10];
	int	x;

	for (x = 0; x < 10; x++)
	{
		printf("Votre score #%d : ", x + 1);
		scanf_s("%d", &scoremax[x]);
	}

	puts("Voici vos meilleurs scores");
	for (x = 0; x < 10; x++)
		printf("#%d %d\n", x + 1, scoremax[x]);

	return 0;
}