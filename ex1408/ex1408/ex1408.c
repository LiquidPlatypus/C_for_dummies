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
	struct humain
	{
		char hnom[45];
		struct date hdatenaiss;
	};
	struct humain president;

	strcpy(president.hnom, "George Washington");
	president.hdatenaiss.sjour = 22;
	president.hdatenaiss.smois = 2;
	president.hdatenaiss.sannee = 1732;

	printf("Naissance de %s le %d/%d/%d\n", 
			president.hnom, 
			president.hdatenaiss.sjour, 
			president.hdatenaiss.smois, 
			president.hdatenaiss.sannee);

	return 0;
}