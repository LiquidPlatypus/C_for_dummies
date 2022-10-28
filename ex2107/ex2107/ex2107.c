#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	struct tm* present;

	time(&tictoc);
	present = localtime(&tictoc);
	printf("A present, nous sommes le %d/%d/%d\n",
		present->tm_mon+1,
		present->tm_mday,
		present->tm_year+1900);

	return 0;
}