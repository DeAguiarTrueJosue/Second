#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	int amount = 0;

	int numberEntered = 0;

	printf("Welcome to a simple avarage calculator\n");

	do
	{
		printf("Please, enter a positive number:");
		scanf_s("%i", &numberEntered);

		if (numberEntered > 0) {
			sum += numberEntered;
			amount++;
			system("cls");
			printf("The last number you inputed was %i\n", numberEntered);
			printf("If you want to stop, enter an invalid number");

		}
		else {
			if (amount == 0) {
				printf("You need to inout at least one valid number\n");
				numberEntered = 1;
			}
			else
			{
				printf("You entered a invalid number, the calculation has stopped\n");
			}
		}
	} while (numberEntered > 0);

	printf("You inputed %i numbers\n", amount);
	printf("The sum of all inputed numbers is %i\n", sum);
	printf("The avarage of all inputed numbers is %.2f\n", (float)sum / (float)amount);

	return 0;
}