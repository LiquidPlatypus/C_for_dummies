#include <stdio.h>

int main()
{
	int a, b;
	float c;

	printf("Premier entier : ");
	scanf_s("%d", &a);
	printf("Second entier : ");
	scanf_s("%d", &b);
	c = (float)a / (float)b;
	printf("%d / %d = %.2f\n", a, b, c);

	return 0;
}