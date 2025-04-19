#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int currentCard = rand() % 10 + 1;
	int nextCard = 0;

	int playerScore = 0;

	char decision = '0';

	printf("In this game you have to guess if the second card is grater or higher than the first one\n");
	printf("If you wish to stop playing this game at any point, type \"S\"\n");
	printf("Lets begin\n");
	
	

	while (true) {
		while (currentCard == nextCard)
		{
			nextCard = rand() % 10 + 1;
		}
		printf("The number of the first card is: %i\n", currentCard);
		printf("If you think the next card will be higher type \"h\", if you think it will be lower type \"l\": ");
		scanf_s(" %c", &decision, 1);
		system("cls");
		
		if (decision == 's' || decision == 'S')
		{
			break;
		}
		else if ((decision == 'l' || decision == 'L'))
		{
			if (currentCard > nextCard) {
				printf("The number on the next card is %i. %i is lower than %i so you got a point\n", nextCard, nextCard, currentCard);
				playerScore++;
			}
			else
			{
				printf("The number on the next card is %i. %i is higher than %i so you didn't get a point\n", nextCard, nextCard, currentCard);
			}
		}
		else if ((decision == 'h' || decision == 'H'))
		{
			if (currentCard < nextCard) {
				printf("The number on the next card is %i. %i is higher than %i so you got a point\n", nextCard, nextCard, currentCard);
				playerScore++;
			}
			else
			{
				printf("The number on the next card is %i. %i is lower than %i so you didn't get a point\n", nextCard, nextCard, currentCard);
			}
		}
		else
		{
			printf("That is not an option, please pay attention on the game\n");
			continue;
		}
		printf("you have %i points\n", playerScore);

		currentCard = nextCard;
	}




	return 0;
}