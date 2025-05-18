#include <stdio.h>

int Pow(int number, int exponent) {
	if (exponent == 0)
	{
		return 1;
	}
	else {
		return Pow(number, exponent - 1) * number;
	}
}

void DecimalToBinary(int decimal)
{
	int binary[32] = {};
	int i = 0, size = 0;

	for (int i = decimal; i > 0; i /= 2)
	{
		binary[size] = i % 2;
		size++;
	}

	for (int i = size - 1; i > 0; i--)
	{
		printf("%i", binary[i]);
	}
	printf("\n");
}

void BinaryToDecimal(int number[], int size)
{
	int decimal = 0;
	for (int i = 0; i < size; i++)
	{
		decimal += number[i] * Pow(2, size - i - 1);
	}
	printf("%i\n", decimal);
}

void DecimalToHexa(int decimal)
{
	char hexa[12] = { };
	int size = 0;
	int nextValue = 0;

	for (int i = decimal; i > 0; i /= 16)
	{
		nextValue = i % 16;
		if (nextValue > 9)
		{
			nextValue += 'A' - 10;
		}
		else {
			nextValue += '0';
		}
		for (int i = size; i > 0; i--)
		{
			hexa[i] = hexa[i - 1];
		}
		hexa[0] = nextValue;
		size++;
	}

	printf("%s", hexa);

	printf("\n");
}

void HexToDecimal(char number[], int size)
{
	int decimal = 0;
	for (int i = 0; i < size; i++)
	{
		if (number[i] < 58)
		{
			decimal += (number[i] - '0') * Pow(16, size - i - 1);
		}
		else
		{
			decimal += (number[i] - 'A' + 10) * Pow(16, size - i - 1);
		}
	}
	printf("%i\n", decimal);
}

int BaseToDecimal(char number[], int size, int base)
{
	int decimal = 0;
	for (int i = 0; i < size; i++)
	{
		if (number[i] < 58)
		{
			decimal += (number[i] - '0') * Pow(base, size - i - 1);
		}
		else
		{
			decimal += (number[i] - 'A' + 10) * Pow(base, size - i - 1);
		}
	}
	printf("%i\n", decimal);
	return decimal;
}

void DecimalToBase(int decimal, int base)
{
	char hexa[64] = "";
	int size = 0;
	int nextValue = 0;

	for (int i = decimal; i > 0; i /= base)
	{
		nextValue = i % base;
		if (nextValue > 9)
		{
			nextValue += 'A' - 10;
		}
		else {
			nextValue += '0';
		}
		for (int i = size; i > 0; i--)
		{
			hexa[i] = hexa[i - 1];
		}
		hexa[0] = nextValue;
		size++;
	}

	printf("%s", hexa);

	printf("\n");
}

void BaseToBase(char number[], int size, int baseFrom, int baseTo)
{
	int decimal = BaseToDecimal(number, size, baseFrom);
	DecimalToBase(decimal, baseTo);
	printf("\n");
}

int main() {
	//DecimalToBinary(125);
	//DecimalToBinary(256);
	//DecimalToBinary(19);
	//DecimalToBinary(513);
	//printf("\n");
	//int binary1[32] = { 1,1,1,1,1,0,1 };
	//BinaryToDecimal(binary1, 7);
	//int binary2[32] = { 1,0,0,0,0,0,0,0,0 };
	//BinaryToDecimal(binary2, 9);
	//int binary3[32] = { 1,0,0,1,1 };
	//BinaryToDecimal(binary3, 5);
	//int binary4[32] = { 1,0,0,0,0,0,0,0,0,1 };
	//BinaryToDecimal(binary4, 10);
	//printf("\n");
	//DecimalToHexa(170);
	//DecimalToHexa(4096);
	//DecimalToHexa(123);
	//DecimalToHexa(2730);
	//printf("\n");
	//char hex1[32] = "AA";
	//HexToDecimal(hex1, 2);
	//char hex2[32] = "1000";
	//HexToDecimal(hex2, 4);
	//char hex3[32] = "7B";
	//HexToDecimal(hex3, 2);
	//HexToDecimal(hex4, 3);
	//printf("\n");
	//BaseToDecimal(hex1, 2, 11);
	//BaseToDecimal(hex2, 4, 8);
	//BaseToDecimal(hex3, 2, 20);
	//BaseToDecimal(hex4, 3, 12);
	char code1[32] = "AAA";
	BaseToBase(code1, 3, 16, 2);
	char code2[32] = "351";
	BaseToBase(code2, 3, 6, 8);
	char code3[32] = "12020";
	BaseToBase(code3, 5, 3, 20);
	char code4[32] = "PUAR";
	BaseToBase(code4, 4, 36, 16);
}