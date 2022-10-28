#include <stdio.h>

int main()
{
	char sample[] = "D'ou me viendra le secours?\n";
	char* ptr = sample;

	while (*ptr != '\0')
	{
		putchar(*ptr);
		ptr++;
	}

	return 0;
}