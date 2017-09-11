#include <iostream>
#include <sstream>
#include <exception>

using namespace std;

int main() {
	int inputNum;
	cin >> inputNum;
	stringstream ss;
	try {
		inputNum < 100 ? throw exception("Less than 100") : 0;
		inputNum <= 200 ? throw exception("Between 100 and 200") : 0;
		inputNum > 200 ? throw exception("Greater than 200") : 0;
	}
	catch (const exception  & e) {
		
		ss << e.what();
		
	}
	cout << ss.str() << endl;
}