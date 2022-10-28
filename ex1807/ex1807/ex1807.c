#include <stdio.h>

int main()
{
	char hello[] = "Salut !";
	int	i = 0;

	while (hello[i])
	{
		printf("%c en %p\n", hello[i], &hello[i]);
		i++;
	}

	return 0;
}