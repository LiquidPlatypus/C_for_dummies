#include <stdio.h>
#include <string.h>

int main()
{
	typedef struct date
	{
		int sjour;
		int smois;
		int sannee;
	} calendrier;
	typedef struct id
	{
		char hprenom[15];
		char hnomfam[20];
	} personne ;
	struct humain
	{
		personne hnom;
		calendrier hdatenaiss;
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