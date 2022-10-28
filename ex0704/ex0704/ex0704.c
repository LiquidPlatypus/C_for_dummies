#include <stdio.h>

int main()
{
	printf("J'attends trois lettre : ");
	int a = getchar();
	int b = getchar();
	int c = getchar();
	printf("Les trois lettres sont : %c, %c et %c", a, b, c);
	return 0;
}