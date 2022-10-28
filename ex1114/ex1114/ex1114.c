#include <stdio.h>

int main()
{
	float degres, radians;

	printf("Indiquez un qngle en radians : ");
	scanf_s("%f", &radians);
	degres = 57.2957795 * radians;
	printf("%.2f radians valent %.2f degres.\n", radians, degres);
	return 0;
}