#include <stdio.h>

int main() {
	//slide 1
	//printing my name and putting two spaces
	printf_s("Josue Alessandro De Aguiar\n\n");
	//printing my favorite game
	printf_s("Valorant\n\n");

	//slide 2
	//health that as a float value
	float health = 100.0f;
	//attack power as a int number
	int attackPower = 10;
	//character level as a int number
	int characterLevel = 1;
	//character class as a single character
	char characterClass = 'a';

	printf("This character health is %f\n", health);
	printf("This character attack power is %i\n", attackPower);
	printf("This character level is %i\n", characterLevel);
	printf("This character class is %c\n\n", characterClass);

	//slide 3
	int gold = 100;
	printf("The stater value of gold you have is %i\n", gold);
	gold = 250;
	printf("The second value of gold you have is %i\n", gold);
	int characterLives = 3;
	printf("The character starts with %i lives\n", characterLives);
	characterLives -= 1;
	printf("The character only has %i lives\n\n", characterLives);

	//slide 4
	int playerAge = 0;
	characterLevel = 0;
	float maximumHealth = 100.0f;

	printf("Plaese, inform me of your age.\n");
	scanf_s("%i", &playerAge);
	printf("Plaese, inform me of your character's level.\n");
	scanf_s("%i", &characterLevel);
	printf("Plaese, inform me of your character's maximum health.\n");
	scanf_s("%f", &maximumHealth);

	printf("Your are %i years old and your %i-level character has %.2f of max health.\n\n", playerAge, characterLevel, maximumHealth);

	//slide 5
	float temperatureInCelsius = 0;
	float temperatureInFahrenheit = 0;
	printf("What is your temperature?\n");
	scanf_s("%f", &temperatureInCelsius);
	temperatureInFahrenheit = temperatureInCelsius * 9 / 5 + 32;
	printf("%.1f degrees celsius is the same as %.1f degrees fahrenheit\n\n", temperatureInCelsius, temperatureInFahrenheit);


	//slide 6
	int x = 12;
	int y = 5;

	//The numbers are adding
	printf("%i + %i = %i\n", x, y, x+y);
	//The numbers are subtracting
	printf("%i - %i = %i\n", x, y, x-y);
	//The numbers are multiplying
	printf("%i * %i = %i\n", x, y, x*y);
	//The numbers are dividing for the whole number
	printf("%i / %i = %i\n", x, y, x/y);
	//The numbers are dividing and taking the rest of the division
	printf("%i %% %i = %i\n", x, y, x%y);
	//The numbers are dividing and using decimal points
	printf("%i / %i = %.1f\n\n", x, y, (float)x/(float)y);


	//slide 7

	gold = 100;
	int wood = 50;

	printf("The starter pack includes %i of gold and %i of wood\n", gold, wood);
	gold += 25;
	wood -= 10;
	gold *= 2;
	wood /= 2;
	printf("You currently have %i of gold and %i of wood\n\n", gold, wood);


	//slide 8

	characterLevel;

	printf("What is your level?\n");
	scanf_s("%i", &characterLevel);

	if (characterLevel >= 10) {
		printf("You can access the dungeon\n\n");
	}
	else {
		printf("You need %i more levels to access this dungeon\n\n", 10 - characterLevel);
	}


	//slide 9

	int age;

	printf("What is your age?\n");
	scanf_s("%i", &age);

	if (age >= 18) {
		printf("Full access granted\n");
	}
	else {
		printf("Limited access granted\n");
	}

	char continuing = 'a';

	printf("Do you wish to procced?\n");
	scanf_s(" %c", &continuing, 1);

	if (continuing == 'y' || continuing == 'Y') {
		printf("Game starting...\n\n");
	}else if (continuing == 'n' || continuing == 'N') {
		printf("Exiting game\n\n");
	}

	//slide 10

	int rank = 0;

	printf("Enter here your rank: ");
	scanf_s("%i", &rank);

	if (rank < 200) {
		printf("ONLY %i?!? You are a worthless beginner\n\n", rank);
	}
	else if (rank < 400) {
		printf("STILL %i?!? You are still a bad novice\n\n", rank);
	}
	else if (rank < 600) {
		printf("I think %i makes you an expert\n\n", rank);
	}
	else if (rank < 800) {
		printf("%i? You are a worth master\n\n", rank);
	}
	else if (rank < 1000) {
		printf("%i?!? You are basically the best grandmaster\n\n", rank);
	}

	//slide 11

	char verifying;

	printf("What is your age?\n");
	scanf_s("%i", &age);

	if (age >= 17) {
		printf("Purchase allowed\n");
	}
	else {
		printf("Do you have parental concent?\n");
		scanf_s(" %c", &verifying, 1);

		if (verifying == 'y' || verifying == 'Y') {
			printf("Purchase allowed.\n\n");
		}
		else if (verifying == 'n' || verifying == 'N') {
			printf("Purchase denied.\n\n");
		}
	}

	//slide 12

	int playerScore = 100;
	int bonus = 50;

	printf("Initial score: %d\n", playerScore);

	playerScore += bonus;
	printf("Score after bonus: %d\n", playerScore);

	if (playerScore == 150) {
		printf("Bonus successfully!\n\n");
	}
	else {
		printf("Something went wrong.\n\n");
	}

	return 0;
}