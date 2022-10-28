#include <stdio.h>
#include <string.h>

int main()
{
	struct date
	{
		int sjour;
		int smois;
		int sannee;
	};
	struct id
	{
		char hprenom[15];
		char hnomfam[20];
	};
	struct humain
	{
		struct id hnom;
		struct date hdatenaiss;
	};
	struct humain president;

	strcpy(president.hnom.hprenom, "George");
	strcpy(president.hnom.hnomfam, "Washington");
	president.hdatenaiss.sjour = 22;
	president.hdatenaiss.smois = 2;
	president.hdatenaiss.sannee = 1732;

	printf("Naissance de %s %s le %d/%d/%d\n",
			president.hnom.hprenom, 
			president.hnom.hnomfam, 
			president.hdatenaiss.sjour,
			president.hdatenaiss.smois,
			president.hdatenaiss.sannee);

	return 0;
}