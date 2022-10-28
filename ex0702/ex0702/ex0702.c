#include <stdio.h>

int main()
{
	int c;

	printf("Je vais recevoir un caractere: ");
	c = getchar();
	printf("J'ai obtenu le caractere '%d'.\n", c);
	return 0;
}