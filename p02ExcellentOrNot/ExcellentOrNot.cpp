#include <iostream>
#include <string>

using namespace std;

int main() {
	double score;
	cin >> score;
	string result = score >= 5.50 ? "Excellent!" : "Not excellent.";
	cout << result << endl;
}