#include <stdio.h>
#include <string.h>
#include <vector>
#include <stdlib.h>

class Player {
public:
	int score = 0;
	int numberChosen = 0;
	char name[12];
	Player(char playerName[12]) {
		strcpy_s(name, playerName);
	}
	void GetPoint() {
		score += 1;
	}
};

int main() {
	bool ended = false;
	int numberOfPlayers = 0;
	std::vector<Player> players;

	printf_s("The first to get 5 points win!\n");
	printf_s("How many player are going to play this game?\n");
	scanf_s("%i", &numberOfPlayers);

	for (int i = 0; i < numberOfPlayers; i++)
	{
		char playerName[12];
		printf("What is the name of the player %i: ", i + 1);
		scanf_s("%s", playerName, 12);
		players.push_back(Player(playerName));
	}

	while (!ended) 
	{
		float avarage = 0.0f;
		int winner = 0;
		bool found = false;
		for (int i = 0; i < numberOfPlayers; i++) {
			printf("%s, Choose a number\n", players[i].name);
			scanf_s("%i", &players[i].numberChosen);
			system("cls");
			avarage += players[i].numberChosen;
		}
		avarage /= (float)numberOfPlayers;
		for (int i = 0; i < numberOfPlayers; i++)
		{
			if (found) {
				if (players[i].numberChosen <= avarage && players[i].numberChosen > players[winner].numberChosen) {
					winner = i;
				}
			}
			else {
				if (players[i].numberChosen <= avarage) {
					winner = i;
					found = true;
				}
			}
		}
		printf("The avarage of the numbers this turn was %.2f, the winner is %s\n", avarage, players[winner].name);
		players[winner].GetPoint();
		for (int i = 0; i < numberOfPlayers; i++)
		{
			printf("%s's current score is %i\n", players[i].name, players[i].score);
		}
		for (int i = 0; i < numberOfPlayers; i++)
		{
			if (players[i].score == 5) {
				printf("%s won!", players[i].name);
				ended = true;
			}
		}
	}



	return 0;
}