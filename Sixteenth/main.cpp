#include <stdio.h>

void PrintHeader() {
	printf("/------------\\\n");
	printf("|---HEADER---|\n");
	printf("\\------------/\n");
}

void PrintOptions() {
	printf("1. First Option\n");
	printf("2. Second Option\n");
	printf("3. Third Option\n");
}

int main() {
	PrintHeader();
	PrintOptions();
	return 0;
}