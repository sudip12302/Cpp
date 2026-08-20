#include <iostream>
using namespace std;

int main() {
	
	auto add = [](int first, int second) {
		return first + second;
	};

	cout << "Sum: " << add(5, 3) << endl;

	int number = 10;
	auto multiply = [number](int value) {
		return number * value;
	};

	cout << "Product: " << multiply(4) << endl;

	return 0;
}

