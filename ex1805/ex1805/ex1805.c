#include <stdio.h>

int main()
{
	struct robot {
		int laive;
		char name[5];
		int xpos;
		int ypos;
		int strength;
	};

	printf("Taille de la structure robot : %u\n", sizeof(struct robot));

	return 0;
}