#include <iostream>
#include <string>

using namespace std;

int main() {
	string inputText;
	cin >> inputText;
	string result = inputText == "s3cr3t!P@ssw0rd" ? "Welcome" : "Wrong password!";
	cout << result << endl;
}