#include <string>
#include <vector>

using namespace std;

class Player {
public:
	string name;
	vector<string> hand;

	Player() {}

	Player(string n) {
		name = n;
	}
};
