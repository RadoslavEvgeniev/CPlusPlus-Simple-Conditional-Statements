#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
	map<string, double> metricsData = { 
		  {"m", 1}
		, {"mm", 1000}
		, {"cm", 100}
		, {"mi", 0.000621371192}
		, {"in", 39.3700787}
		, {"km", 0.001}
		, {"ft", 3.2808399}
		, {"yd", 1.0936133} 
	};
	double value;
	string input;
	string output;
	cin >> value >> input >> output;

	double valueInM = value / metricsData[input];
	double result = valueInM * metricsData[output];
	
	stringstream ss;
	ss << setprecision(10) << fixed << result;
	cout << ss.str() << endl;
}