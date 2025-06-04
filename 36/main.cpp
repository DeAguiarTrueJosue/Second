#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* pointerToFile = nullptr;

	int succeesed = fopen_s(&pointerToFile, "HelloWorld.txt", "a+");
	if (succeesed != 0) {
		succeesed = fopen_s(&pointerToFile, "HelloWorld.txt", "w");
		if (succeesed != 0)
		{
			printf("File failed to be created");
			return 1;
		}
		else
		{
			succeesed = 2;
		}
	}

	int count = 0;
	float avarage = 0.0f;
	char fileContent[100];
	int index = 13;
	int number = 0;

	while (fgets(fileContent, 100, pointerToFile))
	{
		if (strcmp(fileContent, "\0") && strcmp(fileContent, "\n"))
		{
			number = 0;
			index = 13;
			count++;
			while (fileContent[index] != '\n' && fileContent[index] != '\0')
			{
				number *= 10;
				number += fileContent[index] - '0';
				index++;
			}
			avarage += number;
		}
	}

	avarage /= count;

	printf("%.2f", avarage);

	fclose(pointerToFile);

	return 0;
}