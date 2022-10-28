#include <stdio.h>

extern int compteur;

void second(void)
{
	printf("%d_n", compteur + 1);
}