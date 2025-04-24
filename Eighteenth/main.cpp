#include <stdio.h>

void CheckTemperature(int temperature) {
	if (temperature < 0) {
		printf("Cold asf\n");
	}else if (temperature < 15) {
		printf("Cool\n");
	}else if (temperature < 25) {
		printf("Warm\n");
	}else{
		printf("Hot asf\n");
	}
}

int main() {
	CheckTemperature(-1);
	CheckTemperature(1);
	CheckTemperature(14);
	CheckTemperature(19);
	CheckTemperature(27);
	CheckTemperature(24);
	CheckTemperature(-85);

	return 0;
}