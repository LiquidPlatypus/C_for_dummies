#include <stdio.h>

int main()
{
	char	c = 'c';
	int		i = 123;
	float	f = 98.6;
	double	d = 6.022E23;

	printf("Adresse de 'c' %p\n", c);
	printf("Adresse de 'i' %p\n", i);
	printf("Adresse de 'f' %p\n", f);
	printf("Adresse de 'd' %p\n", d);

	return 0;
}
