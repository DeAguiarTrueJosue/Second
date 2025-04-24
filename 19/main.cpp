#include <stdio.h>

int PowerOfTwo(int exponent) {
	int result = 1;

	for (int i = 0; i < exponent; i++)
	{
		result *= 2;
	}

	return result;
}

bool IsPowerOfTwo(int number) {
	for (int i = 1; i <= number; i *= 2)
	{
		if (i == number) { return true; }
	}return false;
}

int main() {

	printf("%i\n", PowerOfTwo(0));
	printf("%i\n", PowerOfTwo(1));

	printf("%i\n", IsPowerOfTwo(1));
	printf("%i\n", IsPowerOfTwo(2));
	printf("%i\n", IsPowerOfTwo(3));
	printf("%i\n", IsPowerOfTwo(4));
	printf("%i\n", IsPowerOfTwo(7));
	printf("%i\n", IsPowerOfTwo(81));
	printf("%i\n", IsPowerOfTwo(512));

	return 0;
}