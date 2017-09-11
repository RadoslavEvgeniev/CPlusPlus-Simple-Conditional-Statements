#include <iostream>
#include <sstream>

using namespace std;

int main() {
	int hours;
	int minutes;
	cin >> hours >> minutes;
	minutes = minutes + (hours * 60) + 15;
	hours = minutes / 60;
	minutes %= 60;
	hours %= 24;
	stringstream ss;
	ss << hours << ":";
	if (minutes < 10)
	{
		ss << 0 << minutes;
	}
	else {
		ss << minutes;
	}
	cout << ss.str() << endl;
}