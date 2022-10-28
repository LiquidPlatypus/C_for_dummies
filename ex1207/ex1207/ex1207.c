#include <stdio.h>
#include <math.h>

int main()
{
	int init_Val[] = { 10, 12, 14, 15, 16, 18, 20 };
	float sqrt_Val[7];

	for (int x = 0; x < 7; x++)
	{
		sqrt_Val[x] = sqrt(init_Val[x]);
		printf("%.2f\n", sqrt_Val[x]);
	}

	return 0;
}