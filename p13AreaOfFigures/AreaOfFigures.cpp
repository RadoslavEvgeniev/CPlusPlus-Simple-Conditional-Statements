#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
	string figure;
	cin >> figure;
	
	map<string, int> figuresIndex = { {"circle", 1}, {"square", 2}, {"triangle", 3}, {"rectangle", 4} };
	int switchCase = figuresIndex[figure];
	double area;

	switch (switchCase)
	{
	case 1:
		double radius;
		cin >> radius;
		area = 3.141592653589793238463 * radius * radius;
		break;
	case 2:
		double side;
		cin >> side;
		area = side * side;
		break;
	case 3:
		double a;
		double h;
		cin >> a >> h;
		area = a * h / 2;
		break;
	case 4:
		double sideA;
		double sideB;
		cin >> sideA >> sideB;
		area = sideA * sideB;
		break;
	}
	cout << setprecision(3) << fixed << area << endl;
}