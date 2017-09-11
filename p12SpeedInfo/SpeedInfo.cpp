#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	double speed = 0;
	cin >> speed;
	map<bool, string> speedData = { { speed <= 10, "slow" },{ speed <= 50, "average" },{ speed <= 150, "fast" },{ speed <= 1000, "ultra fast" },{ speed > 1000, "extremely fast" } };

	for (auto& kvp : speedData) {
		if (kvp.first)
		{
			cout << kvp.second << endl;
			break;
		}
	}
}