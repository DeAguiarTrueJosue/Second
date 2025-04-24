#include <stdio.h>

int CountDigits(int number) {
	int result = 0;
	for (int i = 1; i < number; i *= 10) {
		result++;
	}
	return result;
}

int SumTheDigits(int number) {
	int result = 0;
	int numberOfDigits = CountDigits(number);
	for (int i = 0; i < numberOfDigits; i++) {
		result += number % 10;
		number /= 10;
	}
	return result;
}

int main() {
	printf("%i\n", CountDigits(0));
	printf("%i\n", CountDigits(152));
	printf("%i\n", CountDigits(1562));
	printf("%i\n", CountDigits(154146852));

	printf("%i\n", SumTheDigits(0));
	printf("%i\n", SumTheDigits(152));
	printf("%i\n", SumTheDigits(1562));
	printf("%i\n", SumTheDigits(154146852));



	return 0;
}