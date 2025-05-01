#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int CountDigits(int number) {
	if (number >= 10) {
		return number % 10 + CountDigits(number / 10);
	}
	else {
		return number % 10;
	}
}

static float Pow(float base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	else if (exponent > 0) {
		return Pow(base, exponent - 1) * base;
	}
	else {
		return Pow(base, exponent + 1) / base;
	}
}

static void PrintTriangle(int size) {
	if (size > 0)
	{
		PrintTriangle(size - 1);
		for (int i = 0; i < size; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main() {

	printf("%i\n", CountDigits(14));
	printf("%i\n", CountDigits(1));
	printf("%i\n", CountDigits(13425));
	printf("%i\n", CountDigits(4029835));

	printf("\n");

	printf("%.2f\n", Pow(3, 5));
	printf("%.2f\n", Pow(3, -2));
	printf("%.2f\n", Pow(6, -1));
	printf("%.2f\n", Pow(5, 2));

	printf("\n");

	PrintTriangle(3);
	PrintTriangle(4);
	PrintTriangle(15);
	PrintTriangle(100);

	return 0;
}