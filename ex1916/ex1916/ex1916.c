#include <stdio.h>

int main()
{
	char* sample = "D'ou me viendra le secours?\n";
	char* samplecpy = *sample;

	while (putchar(*sample++))
		;

	*sample = &samplecpy;
	puts(*sample);

	return 0;
}