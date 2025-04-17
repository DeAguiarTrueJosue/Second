#include <stdio.h>

enum levelOfAccess
{
	Denied,
	PG13,
	RRated,
};

int main()
{
	int age = 13;
	bool hasParent = true;
	bool isVIP = true;
	levelOfAccess currentLevelOfAccess = Denied;
	
	if (age >= 13 || hasParent) {
		currentLevelOfAccess = PG13;
		if (age >= 17 || (hasParent && age >= 13)) {
			currentLevelOfAccess = RRated;
		}
	}
	if (age >= 21 || isVIP) {
		printf("You can access the VIP lounge\n");
	}
	else {
		printf("You cannot access the VIP lounge\n");
	}
	
	switch (currentLevelOfAccess)
	{
	case Denied: printf("You can't watch movies\n");
		break;
	case PG13: printf("You can watch movies PG-13\n");
		break;
	case RRated: printf("You can watch movies PG-13 and R-Rated\n");
		break;
	default: printf_s("Denied\n");
		break;
	}

	return 0;
}