#include <stdio.h>
#include <string.h>

struct Employee
{
	int employeeID;
	char name[24];
	char department[24];
	float salary;
	int yearService;
};

struct Car {
	char model[24];
	int year;
	int horsePower;
	float price;
};

int main() 
{
	Employee Josue;
	Josue.employeeID = 1;
	strcpy_s(Josue.name, "Josue");
	strcpy_s(Josue.department, "Human Resources");
	Josue.salary = 1000000.0f;
	Josue.yearService = 2025;

	Car cars[3] = {};
	strcpy_s(cars[0].model, "Uno");
	cars[0].year = 1999;
	cars[0].horsePower = 55;
	cars[0].price = 13000.00f;

	strcpy_s(cars[1].model, "Limo");
	cars[1].year = 2025;
	cars[1].horsePower = 30;
	cars[1].price = 75000.00f;

	strcpy_s(cars[2].model, "Fusca");
	cars[2].year = 1969;
	cars[2].horsePower = 15;
	cars[2].price = 100.00f;

	int mostExpensiveIndex = 0;

	for (int i = 0; i < 3; i++)
	{
		if (cars[i].price > cars[mostExpensiveIndex].price) { mostExpensiveIndex = 1; }
		printf("%s", cars[i].model);
		printf(" - %i;\n%ihp - $%.2f;\n\n", cars[i].year, cars[i].horsePower, cars[i].price);
	}

	printf("%s", cars[mostExpensiveIndex].model);
	printf(" - %i;\n%ihp - $%.2f;\n\n", cars[mostExpensiveIndex].year, cars[mostExpensiveIndex].horsePower, cars[mostExpensiveIndex].price);
}