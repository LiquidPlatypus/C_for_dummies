#include <stdio.h>
#include <stdlib.h>

void second(void);

int compteur;

int main()
{
	for (compteur = 0; compteur < 5; compteur++)
		second;

	return 0;
}