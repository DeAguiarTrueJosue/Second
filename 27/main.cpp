#include <stdio.h>

int SumDigits(int number) {
	if (number < 10)
	{
		return number;
	}
	else {
		return number % 10 + SumDigits(number / 10);
	}
}

int MultiplyDigits(int number) {
	if (number < 10)
	{
		return number;
	}
	else {
		return number % 10 * MultiplyDigits(number / 10);
	}
}

void PrintTriangle(int number, int current = 1, bool rising = true) {
	for (int i = 0; i < current; i++)
	{
		printf("*");
	}
	printf("\n");
	if (current == number)
	{
		rising = false;
	}
	else if (current == 0)
	{
		return;
	}
	PrintTriangle(number, current + (rising ? 1 : -1), rising);
}

int main() {

	printf("%i\n", SumDigits(12345));
	printf("%i\n", SumDigits(786952));

	printf("%i\n", MultiplyDigits(12345));
	printf("%i\n", MultiplyDigits(786952));

	PrintTriangle(120);

	return 0;
}