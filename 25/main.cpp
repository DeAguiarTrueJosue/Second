#include <stdio.h>

void InsertNumber(int position, int value, int numbers[], int* size) {
	for (int i = *size; i > position; i--)
	{
		numbers[i] = numbers[i - 1];
	}
	numbers[position] = value;
	size[0]++;
}

void DeleteNumber(int position, int numbers[], int* size) {
	for (int i = position; i < *size; i++)
	{
		numbers[i] = numbers[i + 1];
	}
	size[0]--;
}

void DisplayArray(int* numbers, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%i ", numbers[i]);
	}
	printf("\n");
}

void SwapNumbers(int numbers[], int index1, int index2) {
	int temp = numbers[index1];
	numbers[index1] = numbers[index2];
	numbers[index2] = temp;
}

int main() {
	int numbers[10] = { 2, 3, 4, 5, 6, 7, 8, 9 };
	int size = 8;

	//printing the initial array
	DisplayArray(numbers, size);

	//inserting a element in the array
	InsertNumber(0, 1, numbers, &size);

	//printing the new array
	DisplayArray(numbers, size);

	//delete a element in the array
	DeleteNumber(3, numbers, &size);

	//printing the new array
	DisplayArray(numbers, size);

	return 0;
}