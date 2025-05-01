#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static void DisplayScore(int score = 10, char symbol = '>', int padding = 1) {
	for (int i = 0; i < score; i++)
	{
		printf("%c", symbol);
		for (int j = 0; j < padding; j++)
		{
			printf(" ");
		}
	}
	printf("\n");
}

static float CalculateFinalScore(int score, int bonus = 0, float multiplier = 1.0f) {
	return (score + bonus) * multiplier;
}

int main() {

	DisplayScore(15);
	DisplayScore(5, 'l', 3);
	DisplayScore(8, '4');
	DisplayScore(20, '=', 0);

	printf("%.2f\n", CalculateFinalScore(20));
	printf("%.2f\n", CalculateFinalScore(30, 1,  0.95f));
	printf("%.2f\n", CalculateFinalScore(90, 10));
	printf("%.2f\n", CalculateFinalScore(90, 5, 1.0525f));
	printf("%.2f\n", CalculateFinalScore(8, 0, 1.25f));

	return 0;
}