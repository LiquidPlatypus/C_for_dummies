#include <stdio.h>

int main()
{
	char input[64];
	int ch;
	int x = 0;

	printf("Saississez du texte : ");
	fgets(input, 63, stdin);

	while (input[x] != '\n')
	{
		ch = input[x];
		if (isalpha(ch))
			ch &= 223;
		putchar(ch);
		x++;
	}
	putchar('\n');

	return 0;
}