#include <stdio.h>

int main() {
	
	int numberInputed = 0;
	long finalNumber = 0;

	printf("Choose a number to begin the opperetion\n");
	scanf_s("%i", &numberInputed);

	for (int i = 0; i <= numberInputed * 2; i++) {
		if (i % 2 == 1) {
			finalNumber += i;
		}
	}

	printf("%i squared is %i\n", numberInputed, finalNumber);


	return 0;
}