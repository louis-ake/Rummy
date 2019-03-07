#include <iostream>
#include "Cards.h"

using namespace std;

void main() {
	Cards c;
	for (int i = 0; i < sizeof(c.deck)/sizeof(c.deck[0]); i++) {
		cout << c.deck[i] << " ";
	}
	system("pause");
}