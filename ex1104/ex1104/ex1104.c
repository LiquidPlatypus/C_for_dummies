#include <stdio.h>

int main()
{
	int x = -10;

	while (x < 10)
	{
		printf("%d ", x);
		x++;
	}
	while (x >= -10)
	{
		printf("%d ", x);
		x--;
	}
}