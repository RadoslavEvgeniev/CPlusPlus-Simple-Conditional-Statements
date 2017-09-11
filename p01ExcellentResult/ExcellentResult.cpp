#include <iostream>

using namespace std;

int main() {
	double score;
	cin >> score;
	bool excellent;
	excellent = score >= 5.50 ? true : false;
	
	if (excellent)
	{
		cout << "Excellent!" << endl;
	}
}