#include <stdio.h>
#include <stdlib.h>

int main() {

	int number;
	char decision = '0';

	printf("Wellcome to a simple calculator\n");

	do {
		do {
			printf("Enter a positive number: ");
			scanf_s("%i", &number);

			if (number <= 0) {
				printf("I said positive, you dumbass\n");
			}
		} while (number <= 0);

		printf("Your number was %i\n", number);
		printf("The square of your number is %i\n", number * number);
		printf("The cube of you number is %i\n\n", number * number * number);

		printf("Do you want to keep going? ");
		scanf_s(" %c", &decision, 1);
		system("cls");

	} while (decision != 'n' && decision != 'N');
	

	return 0;
}