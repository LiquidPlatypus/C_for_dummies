#include <stdio.h>

int main()
{
	int a, b, leplusgrand;

	printf("Indiquez une valeur A: ");
	scanf_s("%d", &a);
	printf("Indiquez une autre valeur B: ");
	scanf_s("%d", &b);

	if (a > b)
		printf("La valeur %d est plus grande.\n", a);
	else
		printf("La valeur %d est plus grande.\n", b);
	return 0;
}