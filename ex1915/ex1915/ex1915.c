#include <stdio.h>

int main()
{
	char* sample = "D'ou me viendra le secours?\n";

	while (putchar(*sample++))
		;

	return 0;
}