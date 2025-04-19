#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int maxAttempt = 5;

	int guess = 0;
	int attempts = 0;

	bool notGuessed = true;
	int randomNumber = rand() % 20 + 1;


	printf("Wellcome to the guessing game\n");
	printf("You have %i chances to guess the right number\n", maxAttempt);
	printf("Lets start\n");

	while (attempts < maxAttempt && notGuessed) {
		printf("Attempt: %i/%i. Guess a number between 1 and 20:\n", attempts + 1, maxAttempt);
		scanf_s("%i", &guess);

		if (attempts < maxAttempt) {
			if (guess < randomNumber) {
				printf("Too low, guess a higher number\n");
			}
			else if (guess > randomNumber) {
				printf("Too high, guess a lower number\n");
			}
			else {
				printf("You guessed it!! The number was %i\n", randomNumber);
				notGuessed = false;
			}
		}
		else {
			printf("You lost! The number was %i", randomNumber);
		}
		attempts++;
	}




	return 0;
}