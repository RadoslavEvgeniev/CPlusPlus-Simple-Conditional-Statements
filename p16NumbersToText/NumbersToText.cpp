#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	string zeroToNine[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string zeroToHundred[10] = { "zero", "ten", "twenty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred" };
	string numMatrix[10][10];
	for (int row = 0; row < 10; row++)
	{
		numMatrix[row][0] = zeroToHundred[row];
		for (int col = 1; col < 10; col++)
		{
			numMatrix[row][col] = zeroToNine[col];
		}
	}

	string test;

}