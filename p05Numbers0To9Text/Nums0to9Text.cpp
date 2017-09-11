#include <iostream>
#include <string>

using namespace std;

int main() {
	string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int inputNum;
	cin >> inputNum;
	
	try {
		if (inputNum < 0 || inputNum > 9)
		{
			throw exception();
		}
		cout << nums[inputNum] << endl;
	}
	catch (exception e) {
		cout << "number too big" << endl;
	}
}