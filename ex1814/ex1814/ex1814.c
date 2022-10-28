#include <stdio.h>

int main()
{
	int x;
	float f;

	int* px;
	float* pf;

	px = &x;
	*px = 18;

	pf = &f;
	*pf = 18.5;

	printf("int = %d\nfloat = %.1f\n", x, f);

	return 0;
}