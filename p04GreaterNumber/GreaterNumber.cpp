#include <iostream>

using namespace std;

int main() {
	int nums[2];
	int num1;
	int num2;
	cin >> num1 >> num2;
	nums[0] = num1;
	nums[1] = num2;
	int max = -2147000000;
	for (int & num : nums) {
		max = num >= max ? num : max;
	}
	cout << max << endl;
}