#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	int player1;
	int player2;
	int player3;
	int totalSeconds;
	cin >> player1 >> player2 >> player3;
	totalSeconds = player1 + player2 + player3;
	int minutes = totalSeconds / 60;
	totalSeconds %= 60;
	stringstream ss;
	/*if (minutes < 10)
	{
		ss << "0" << minutes << ":";
	}
	else {
		ss << minutes << ":";
	}*/
	ss << minutes << ":";
	if (totalSeconds < 10)
	{
		ss << "0" << totalSeconds;
	}
	else {
		ss << totalSeconds;
	}
	cout << ss.str() << endl;
	
}