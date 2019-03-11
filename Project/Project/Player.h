#include <string>
#include <array>

using namespace std;

class Player {
public:
	string name;
	array<string, 7> hand;

	Player() {}

	Player(string n) {
		name = n;
	}
};
