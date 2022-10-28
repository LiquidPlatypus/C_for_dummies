#include <stdio.h>

int main(int argc, char* argv[])
{
	for (int x = 0; x < argc; x++)
	{
		printf("Arg#%d = %s\n", x + 1, argv[x]);
	}

	return 0;
}