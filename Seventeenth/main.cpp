#include <stdio.h>

void DrawRectangle(int width, int height, char symbol) {
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++) {
			printf("%c", symbol);
		}
		printf("\n");
	}
}

int main() {
	DrawRectangle(3, 1, '0');
	printf("\n");
	DrawRectangle(5, 7, 'w');
	printf("\n");
	DrawRectangle(11, 20, '-');

	return 0;
}