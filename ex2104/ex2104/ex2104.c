#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	int x = 0;

	while(x < 20)
	{
		time(&tictoc);
		printf("Il est exactement %ld\n", tictoc);
		x++;
	}

	return 0;
}