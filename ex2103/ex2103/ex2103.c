#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;

	time(&tictoc);
	printf("Il est exactement %ld\n", tictoc);
	time(&tictoc);
	printf("Il est maintenant %ld\n", tictoc);

	return 0;
}