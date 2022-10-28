#include <stdio.h>

int main()
{
	int c;

	printf("Je vais recevoir un caractere: ");
	c = getc(stdin);
	printf("J'ai obtenu le caractere '%c'.\n", c);
	return 0;
}