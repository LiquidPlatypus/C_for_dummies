#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Bonjour Les Amis !!!";
	int index = 0;
	char c;

	printf("%s\n", &string);

	while (string[index])
	{
		c = string[index];
		if (isupper(string[index]))
			string[index] = tolower(c);
		else if (islower(string[index]))
			string[index] = toupper(c);
		else
			string[index] = c;
		index++;
	}
	printf("%s\n", &string);

	return 0;
}