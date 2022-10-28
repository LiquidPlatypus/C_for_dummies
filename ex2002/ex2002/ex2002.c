#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *temp;
	int type;

	temp = (float*)malloc(sizeof(float) * 1);
	if (temp == NULL)
	{
		puts("Allocation memoire impossible");
		exit(1);
	}

	printf("Saisssez une temperature : ");
	scanf_s("%f", temp);
	getchar();
	printf("De quelle unite est-elle? C ou F? ");
	type = toupper(getchar());

	if (type == 'C')
		printf("Cela donne %.2f Kelvin.\n", *temp + (273.15));
	else if (type == 'F')
		printf("cela donne %.2f Kelvin.\n", ((*temp + 459.67) * (5.0 / 9.0)));
	else
		printf("Ce n'est pas une unite adaptee.\n");

	return 0;
}