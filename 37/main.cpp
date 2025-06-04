#include <stdio.h>
#include <string.h>

struct Student
{
	int ID;
	char name[50];
	float GPA;
};

int main() 
{
	FILE* dataBase = nullptr;

	Student students[3];
	students[0].ID = 1;
	strcpy_s(students[0].name, "Josue");
	students[0].GPA = 3.75f;
	students[1].ID = 2;
	strcpy_s(students[2].name, "Juan");
	students[1].GPA = 3.5f;
	students[2].ID = 3;
	strcpy_s(students[2].name, "Zinadine");
	students[2].GPA = 4.0f;

	if (fopen_s(&dataBase, "DataBase.txt", "w")) 
	{
		return 1;
	}

	for (int i = 0; i < 3; i++)
	{
		fprintf_s(dataBase, "%i:", students[i].ID);
		fprintf_s(dataBase, "%s", students[i].name);
		fprintf_s(dataBase, ":%.2f\n", students[i].GPA);
	}

	fclose(dataBase);

	if (fopen_s(&dataBase, "DataBase.txt", "r"))
	{
		return 1;
	}

	return 0;
}