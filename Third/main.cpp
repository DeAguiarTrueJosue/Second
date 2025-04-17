#include <stdio.h>

enum levelOfAccess
{
	Denied,
	Regular,
	VIP
};

int main()
{
	int age = 22;
	bool hasID = true;
	bool isVIP = true;
	levelOfAccess currentLevelOfAccess = Denied;

	if (age >= 21 && hasID) {
		currentLevelOfAccess = Regular;
		if (isVIP || age >= 25) {
			currentLevelOfAccess = VIP;
		}
	}

	switch (currentLevelOfAccess)
	{
	case Denied: printf("Denied\n");
		break;
	case Regular: printf("Regular entry\n");
		break;
	case VIP: printf_s("VIP section\n");
		break;
	default: printf_s("Denied\n");
		break;
	}

	return 0;
}