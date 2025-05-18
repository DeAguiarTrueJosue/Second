#include <stdio.h>

struct Rectangle
{
	int height, width;
};

Rectangle CreateRectangle(int width, int height) {
	Rectangle rec;
	rec.width = width;
	rec.height = height;
	return rec;
}

void AnalyseRectangle(Rectangle rec) {
	printf("Analysing rectangle: ");
	PrintProperties(rec);
	PrintArea(rec);
	PrintPerimeter(rec);
	printf("\n");
}

void PrintProperties(Rectangle rec) {
	printf("%i x %i\n", rec.width, rec.height);
}

void PrintArea(Rectangle rec) {
	printf("Area: %i\n", rec.width * rec.height);
}

void PrintPerimeter(Rectangle rec) {
	printf("Perimeter: %i\n", (rec.width + rec.height) * 2);
}

int main()
{
	Rectangle rec = CreateRectangle(5, 9);
	AnalyseRectangle(rec);




	return 0;
}