#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* entrante;
	char* tempon;
	char* i, * o;

	entrante = (char*)malloc(sizeof(char) * 1024);
	tempon = (char*)malloc(sizeof(char) * 1024);
	if (entrante == NULL || tempon == NULL)
	{
		puts("Allocation memoire impossible.");
		exit(1);
	}

	puts("Saisissez quelque chose d'un peu long :");
	fgets(entrante, 1023, stdin);

	i = entrante;
	o = tempon;
	while (*i != '\n')
	{
		if (*i == 'a' || *i == 'e' || *i == 'i' || *i == 'o' || *i == 'u' || *i == 'y')
		{
			*i = '@';
			*o = *i;
		}
		else
			*o = *i;
		o++;
		i++;
	}
	*o = '\0';

	puts("Vous avez saisi :");
	printf("\"%s\"\n", entrante);

	return 0;
}