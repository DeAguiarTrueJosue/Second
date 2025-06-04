#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* pointerToFile = nullptr;

	int succeesed = fopen_s(&pointerToFile, "Journal.txt", "a+");
	if (succeesed != 0) {
		succeesed = fopen_s(&pointerToFile, "Journal.txt", "w");
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

	int last = 0;
	char fileContent[100];
	char lastLine[100] = "\n";

	while (fgets(fileContent, 100, pointerToFile))
	{
		if (strcmp(fileContent, "\0"))
		{
			strcpy_s(lastLine, fileContent);
		}
	}

	int index = 4;

	while (lastLine[index] != '\n')
	{
		if (lastLine[0] == '\n')
		{
			break;
		}
		last *= 10;
		last += lastLine[index] - '0';
		index++;
	}

	printf("Day %i\n", last + 1);

	fprintf(pointerToFile, "Day %i\n", last + 1);

	fclose(pointerToFile);

	succeesed = fopen_s(&pointerToFile, "Journal.txt", "a+");
	if (succeesed != 0) {
		succeesed = fopen_s(&pointerToFile, "Journal.txt", "w");
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

	last = 0;
	strcpy_s(lastLine, "\n");

	while (fgets(fileContent, 100, pointerToFile))
	{
		if (strcmp(fileContent, "\0"))
		{
			strcpy_s(lastLine, fileContent);
		}
	}

	index = 4;

	while (lastLine[index] != '\n')
	{
		if (lastLine[0] == '\n')
		{
			break;
		}
		last *= 10;
		last += lastLine[index] - '0';
		index++;
	}

	printf("Day %i\n", last + 1);

	fprintf(pointerToFile, "Day %i\n", last + 1);

	fclose(pointerToFile);

	return 0;
}