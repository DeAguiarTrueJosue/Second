#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main() {

	int i = 0;
	int numberInputed = 0;
	long long int finalNumber = 0;

	printf("Choose a number to begin the opperetion\n");
	scanf_s("%i", &numberInputed);

	struct timespec begin;
	timespec_get(&begin, TIME_UTC);

	while (i <= numberInputed * 2) {
		if (i % 2 == 1) {
			finalNumber += i;
			printf("%lld\n", finalNumber);
		}
		i++;
	}
	struct timespec end;
	timespec_get(&end, TIME_UTC);

	double timespend = (end.tv_sec - begin.tv_sec) + (end.tv_nsec - begin.tv_nsec) / 1000000000.0;

	printf("%i squared is %lld\n", numberInputed, finalNumber);
	printf("%lf\n", timespend);

	return 0;
}