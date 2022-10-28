#include <stdio.h>

int main()
{
	char tictactoe[3][3] = {
		'.', '.', '.',
		'.', 'X', '.',
		'.', '.', '.'
	};
	int x, y;

	/* Affiche le plateau */
	puts("Une partie de Tic-Tac-Toe ?");
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
			printf("%c\t", tictactoe[x][y]);
		putchar('\n');
	}

	return 0;
}