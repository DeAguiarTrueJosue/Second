#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetRandomNumber() {
	int value = (rand() % 101);
	value = value * value / 100;
	return value;
}

int main() {
	srand(time(NULL));

	int tests[] = { GetRandomNumber(), GetRandomNumber(), GetRandomNumber(), GetRandomNumber(), GetRandomNumber(), GetRandomNumber() };
	float average = 0;
	int grades[] = { 0, 0, 0, 0, 0 };

	for (int i = 0; i < sizeof(tests) / sizeof(tests[0]); i++)
	{
		printf("This test score is %i, ", tests[i]);
		average += tests[i];
		if (tests[i] > 90) {
			grades[0]++;
			printf("it is excelent!\n");
		}
		else if (tests[i] > 80) {
			grades[1]++;
			printf("it is great!\n");
		}
		else if (tests[i] > 70) {
			grades[2]++;
			printf("it is mid\n");
		}
		else if (tests[i] > 60) {
			grades[3]++;
			printf("it is bad\n");
		}
		else {
			grades[4]++;
			printf("it is horrible!\n");
		}
	}

	printf("\n");

	average /= sizeof(tests) / sizeof(tests[0]);

	printf("The average of your tests' grades was %.2f\n\n", average);

	printf("%i tests were excelent\n", grades[0]);
	printf("%i tests were great\n", grades[1]);
	printf("%i tests were mid\n", grades[2]);
	printf("%i tests were bad\n", grades[3]);
	printf("%i tests were horrible\n", grades[4]);

	return 0;
}