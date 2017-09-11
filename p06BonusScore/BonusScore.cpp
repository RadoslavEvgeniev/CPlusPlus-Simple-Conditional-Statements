#include <iostream>

using namespace std;

int main() {
	int score;
	double bonusScore = 0;
	//double totalScore;
	cin >> score;
	bonusScore += score > 1000 ? 0.1 * score : 0;
	bonusScore += score > 100  && score <= 1000 ? 0.2 * score : 0;
	bonusScore += score <= 100 ? 5 : 0;
	try {
		bonusScore += score % 2 == 0 ? throw exception() : 0;
		bonusScore += score % 10 == 5 ? 2 : 0;
	}
	catch (exception e) {
		bonusScore += 1;
	}
	
	
	cout << bonusScore << endl;
	cout << bonusScore + score << endl;
}