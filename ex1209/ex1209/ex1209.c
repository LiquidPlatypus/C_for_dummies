#include <stdio.h>

int main()
{
	char prenom[16];

	printf("Quel est votre prenom? ");
	fgets(prenom, 16, stdin);
	printf("Ravi de vous rencontrer, %s\n", prenom);
	
	return 0;
}