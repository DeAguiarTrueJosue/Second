#include <stdio.h>

void DisplayArray(int* numbers, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%i ", numbers[i]);
	}
	printf("\n");
}

void DeleteNumber(int position, int numbers[], int* size) {
	for (int i = position; i < *size; i++)
	{
		numbers[i] = numbers[i + 1];
	}
	size[0]--;
}

void SwapNumbers(int numbers[], int index1, int index2) {
	int temp = numbers[index1];
	numbers[index1] = numbers[index2];
	numbers[index2] = temp;
}

void BubbleSortArray(int numbers[], int* size) {
	bool sorted = false;
	do
	{
		sorted = true;
		for (int i = 0; i < *size - 1; i++)
		{
			if (numbers[i] > numbers[i + 1]) {
				SwapNumbers(numbers, i, i + 1);
				sorted = false;
			}
		}
	} while (!sorted);
}

void StalinSortArray(int numbers[], int* size) {
	for (int i = 0; i < *size - 1; i++)
	{
		if (numbers[i] > numbers[i + 1]) {
			DeleteNumber(i, numbers, size);
			i--;
		}
	}
}

int main() {

	int numbers[10] = { 52, 10, 98, 45, 36, 60, 98 };
	int size = 7;

	DisplayArray(numbers, size);

	StalinSortArray(numbers, &size);

	DisplayArray(numbers, size);



	return 0;
}