#include <stdio.h>

int main()
{
	int a, b, leplusgrand;

	printf("Indiquez une valeur A: ");
	scanf_s("%d", &a);
	printf("Indiquez une autre valeur B: ");
	scanf_s("%d", &b);

	leplusgrand = (a > b) ? a : b;
	printf("La valeur de %d est plus grande.\n", leplusgrand);
	return 0;
}