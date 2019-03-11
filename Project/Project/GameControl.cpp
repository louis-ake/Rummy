#include <iostream>
#include <array>
#include "Cards.h"
#include "Player.h"

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

void main() {
	/*
	Cards c;
	for (int i = 0; i < c.deck.size(); i++) {
		cout << c.deck.at(i) << " ";
	}
	*/
	createPlayers();
	cout << players[0].name << endl << players[1].name << endl;
	system("pause");
}
