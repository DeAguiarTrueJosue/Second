#include <stdio.h>

int main() {

	const int max = 100000;

	int size = 1;

	int primes[max] = { 2 };

	for (int i = 2; i < 2147483647; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i % primes[j] == 0)
			{
				break;
			}
			else if(primes[j] * primes[j] > i)
			{
				primes[size] = i;
				printf("%i - ", size + 1);
				printf("%i\n", primes[size - 1]);
				size++;
				break;
			}
		}
	}

	return 0;
}