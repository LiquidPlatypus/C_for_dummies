#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;

	tictoc = time(NULL);
	printf("Il est exactement %ld\n", tictoc);

	return 0;
}