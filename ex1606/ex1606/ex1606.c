#include <stdio.h>

void procedure(void);

int main()
{
	puts("Premier appel");
	procedure();
	puts("Second appel");
	procedure();

	return 0;
}

void procedure(void)
{
	static int a = 0;

	printf("La valeur de la variable a est %d\n", a);
	printf("Indiquez une autre valeur : ");
	scanf_s("%d", &a);
}