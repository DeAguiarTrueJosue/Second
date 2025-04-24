#include <stdio.h>

int main() {

	for (int x = 2; x <= 6; x++)
	{
		for (int y = 1; y <= 4; y++) {
			if (x * y < 10) {
				printf("The pair (%i, %i) has a product of %i\n", x, y, x * y);
			}
		}
	}

	return 0;
}