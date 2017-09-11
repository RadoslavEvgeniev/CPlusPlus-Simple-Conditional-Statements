#include <iostream>
#include <string>
#include <locale>
#include <sstream>

using namespace std;

int main() {
	string word1;
	string word2;
	locale loc;
	stringstream ss;
	string word1lower;
	string word2lower;

	cin >> word1 >> word2;
	
	for (auto e : word1) {
		ss << tolower(e, loc);
	}
	word1lower = ss.str();
	ss.str("");
	for (auto e : word2) {
		ss << tolower(e, loc);
	}
	word2lower = ss.str();

	if (word1lower == word2lower)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

}