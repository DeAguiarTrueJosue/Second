#include <stdio.h>
#include <windows.h>

void PrintSword(int max = 0) {
	for (int i = 0; i < max; i++) {
		system("cls");
		if (i % 2 == 1) {
			printf("   #   \n");
			printf("  # #  \n");
			printf("  # #  \n");
			printf("  # #  \n");
			printf(" # # # \n");
			printf("   #   \n");
			printf("   *   \n");
		}
		else {
			printf("          #   \n");
			printf("        # #  \n");
			printf("       # #  \n");
			printf("      # #  \n");
			printf("    # # # \n");
			printf("     #   \n");
			printf("    *   \n");
		}
		Sleep(200);
	}
}

int main() {

	PrintSword(10);


	return 0;
}