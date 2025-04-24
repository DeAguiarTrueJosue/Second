#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {

	int maximumValue = 1000000000;

	for (int i = 0, j = 1; i < maximumValue; i += j, j+=i)
	{
		printf("%i\n%i", i, j);

		if (j < maximumValue / 2) {
			printf("\n");
		}
	}

	return 0;
}