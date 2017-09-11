#include <iostream>
#include <string>

using namespace std;

int main() {
	int inputNum;
	cin >> inputNum;
	string result = inputNum % 2 == 0 ? "even" : "odd";
	cout << result << endl;

}