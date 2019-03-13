#include <iostream>
#include <array>
#include <string>
#include "Cards.h"
#include "Player.h"
#include <time.h>

using namespace std;

array<Player, 2> players;

void createPlayers() {
	string name1;
	string name2;
	cout << "please enter player 1's name: " << endl;
	cin >> name1;
	cout << "please enter player 2's name: " << endl;
	cin >> name2;
	Player pl1(name1);
	Player pl2(name2);
	players[0] = pl1;
	players[1] = pl2;
}

/*
void deal() {
	srand(time(NULL));
	for (int i = 0; i < 14; i++) {
		int random = rand % Cards.deck.size();
		string card;
		if (i % 2 != 0) {

		}
	}
}
*/



void main() {
	createPlayers();
	cout << players[0].name << endl << players[1].name << endl;
	Cards c;
	// print deck
	cout << "deck: " << endl;
	for (int i = 0; i < c.deck.size(); i++) {
		cout << c.deck.at(i) << " ";
	}
	// dealing 
	srand(time(NULL));
	for (int i = 0; i < 14; i++) {
		int random = rand() % c.deck.size();
		string card;
		if (i % 2 != 0) {
			players[0].hand.push_back(c.deck.at(random));
		}
		else {
			players[1].hand.push_back(c.deck.at(random));
		}
		c.deck.erase(c.deck.begin() + random);
	}
	// print deck
	cout << "deck: " << endl;
	for (int i = 0; i < c.deck.size(); i++) {
		cout << c.deck.at(i) << " ";
	}
	system("pause");
}

