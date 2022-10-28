#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* age;

	age = (int*)malloc(sizeof(int) * 1);
	if (age == NULL)
	{
		puts("Allocation memoire impossible.");
		exit(1);
	}
	printf("Votre age en annees? ");
	scanf_s("%d", age);
	*age *= 365;
	printf("Vous avez vu plus de %d jours!\n", *age);
	free(age);

	return 0;
}