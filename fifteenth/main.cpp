#include <stdio.h>
#include <stdlib.h>

float ConvertToFahrenheit(float temperatureInCelsius) {
	return temperatureInCelsius * 9 / 5 + 32;
}

float ConvertToCelsius(float temperatureInFahrenheit) {
	return (temperatureInFahrenheit - 32) * 5 / 9;
}

int main() {

	int choice = 0;

	float temperatureInCelsius = 0;
	float temperatureInFahrenheit = 0;

	printf("This is a conversion tool for temperature\n");

	do
	{
		printf("To start, choose the operation you want:\n");
		printf("1 - Celsius to Fahrenheit\n");
		printf("2 - Fahrenheit to Celsius\n");
		scanf_s("%i", &choice);
		system("cls");

		switch (choice)
		{
		case 1: do
		{
			printf("You chose to convert Celsius to Fahrenheit\n");
			printf("Enter the value in Celsius: ");
			scanf_s("%f", &temperatureInCelsius);

			if (temperatureInCelsius < 100 && temperatureInCelsius > -100) {

				printf("The temperature you chose was %.1f degrees Celcius\n", temperatureInCelsius);

				temperatureInFahrenheit = ConvertToFahrenheit(temperatureInCelsius);

				printf("The value in Fahrenheit is %.1f degrees\n", temperatureInFahrenheit);

				break;
			}

			system("cls");
			printf("your number is outside the bounderies of this tool\n");
			printf("Try a number between -100 and 100\n");
		} while (true);

			  break;
		case 2:do
		{
			printf("You chose to convert Fahrenheit to Celsius\n");
			printf("Enter the value in Fahrenheit: ");
			scanf_s("%f", &temperatureInFahrenheit);

			if (temperatureInFahrenheit < 212 && temperatureInFahrenheit > -148) {

				printf("The temperature you chose was %.1f degrees Fahrenheit\n", temperatureInFahrenheit);

				temperatureInCelsius = ConvertToCelsius(temperatureInFahrenheit);

				printf("The value in Celsius is %.1f degrees\n", temperatureInCelsius);

				break;
			}
			system("cls");
			printf("your number is outside the bounderies of this tool\n");
			printf("Try a number between -148 and 212\n");
		} while (true);

			  break;
		default: system("cls");
			printf("This is not a valid option, please enter a valid option\n");
			continue;
			break;
		}

		printf("Do you wish to keep using the conversion tool?\n");
		printf("1 - Yes\n");
		printf("2 - No\n");
		scanf_s("%i", &choice);
		system("cls");

		if (choice != 1) {
			break;
		}

	} while (true);

	return 0;
}