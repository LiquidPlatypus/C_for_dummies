#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	struct tm* present;

	time(&tictoc);
	present = localtime(&tictoc);
	printf("A present, nous sommes le %d/%d/%d ",
		present->tm_mon + 1,
		present->tm_mday,
		present->tm_year + 1900);

	printf("et il est ");

	if (present->tm_hour > 12)
		printf("%d.%d PM.\n", present->tm_hour, present->tm_min);
	else
		printf("%d.%d AM.\n", present->tm_hour, present->tm_min);

	return 0;
}