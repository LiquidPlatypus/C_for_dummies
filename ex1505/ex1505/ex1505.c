#include <stdio.h>
#include <stdlib.h>

int main()
{
	puts("Ce programme stoppe abruptement.");
	sub();
	puts("Est_ce l'intention initiale?");
	return 0;
}

void sub(void)
{
	puts("C'est normal.");
	exit(0);
}