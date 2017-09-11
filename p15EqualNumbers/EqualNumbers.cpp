#include <iostream>
#include <string>

using namespace std;

int main() {
	int num1;
	int num2;
	int num3;
	cin >> num1 >> num2 >> num3;
	string result = num1 == num2 && num2 == num3 ? "yes" : "no";
	cout << result << endl;
	
}