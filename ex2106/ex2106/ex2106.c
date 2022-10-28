#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	struct tm* present;

	time(&tictoc);
	present = localtime(&tictoc);
	printf("A present, nous sommes le %d/%d/%d\n",
		present->tm_mon,
		present->tm_mday,
		present->tm_year);

	return 0;
}