#include <iostream>
#include "Cards.h"

using namespace std;

void main() {
	Cards c;
	for (int i = 0; i < c.deck.size() ; i++) {
		cout << c.deck.at(i) << " ";
	}
	system("pause");
}