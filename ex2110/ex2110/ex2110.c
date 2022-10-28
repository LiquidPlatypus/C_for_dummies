#include <stdio.h>
#include <time.h>

int main()
{
	time_t tictoc;
	struct tm* present;
	char *days[] = { "Lundi",
					 "Mardi",
					 "Mercredi",
					 "Jeudi",
					 "Vendredi",
					 "Samedi",
					 "Dimanche" };

	time(&tictoc);
	present = localtime(&tictoc);
	printf("A present, nous sommes le %s/%d/%d et il est %dh%d.\n",
		*days + present->tm_wday,
		present->tm_mon + 1,
		present->tm_year + 1900,
		present->tm_hour,
		present->tm_min);

	return 0;
}