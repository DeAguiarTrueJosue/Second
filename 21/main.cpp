#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDice() {
	int value = rand() % 6 + 1;
	printf("This dice rolled a %i\n", value);
	return value;
}

int main() {
	srand(time(NULL));

	int sum = 0;

	while (sum != 7 && sum != 11 && sum != 12 && sum != 2 && sum != 3)
	{
		int value1 = RollDice();
		int value2 = RollDice();
		sum = value1 + value2;
		printf("Your sum is %i\n", sum);

		switch (sum)
		{
		case 7:
		case 11:
			printf("Lucky Roll!!\n");
			break;
		case 2:
		case 3:
		case 12:
			printf("Tough Luck\n");
			break;
		default:
			printf("Roll again\n");
			break;
		}

		char position = 'A' + rand() % 6;
		printf("\nYour position is: %c\n\n", position);

	}
	return 0;
}