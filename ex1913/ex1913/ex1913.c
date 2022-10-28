#include <stdio.h>

int main()
{
	char sample[] = "D'ou me viendra le secours?\n";
	char* ptr = sample;

	while (putchar(*ptr++))
		;

	return 0;
}