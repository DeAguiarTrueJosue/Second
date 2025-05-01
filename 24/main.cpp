#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int tests[] = { 15, 65, 13, 54, 86, 23 };
	float average = 0;
	int grades[] = { 0, 0, 0, 0, 0 };

	for (int i = 0; i < sizeof(tests)/sizeof(tests[0]); i++)
	{
		average += tests[i];
		if (tests[i] > 90) {
			grades[0]++;
		}else if (tests[i] > 80) {
			grades[1]++;
		}else if (tests[i] > 70) {
			grades[2]++;
		}else if (tests[i] > 60) {
			grades[3]++;
		}
		else {
			grades[4]++;
		}
	}

	average /= sizeof(tests) / sizeof(tests[0]);

	printf("The average of your tests' grades was %.2f\n\n", average);

	printf("%i tests were excelent\n", grades[0]);
	printf("%i tests were great\n", grades[1]);
	printf("%i tests were mid\n", grades[2]);
	printf("%i tests were bad\n", grades[3]);
	printf("%i tests were horrible\n", grades[4]);

	return 0;
}