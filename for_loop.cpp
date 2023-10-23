#include <iostream>

using namespace std;

/**
 * @brief A C++ program to print numbers or "even" and "odd" based on user input.
 *
 * This program takes two positive integer inputs from the user and then prints numbers from the first input to the second input.
 * If the number is between 1 and 9 , it prints the corresponding word .
 * If the number is greater than 9, it prints "even" if it's even and "odd" if it's odd.
 * 
 */

int main() {

	int a{}, b{};
	int temp{}, i{};

	cin >> a >> b;
	while (a * b < 0 or a < 0) {
		cout << "Numbers must be positive" << endl;
		cin >> a >> b;
	}

	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}

	string words[9] = { "one","two","three","four","five","six","seven","eight","nine" };

	for (i = a; i <= b; i++) {
		if (i >= 1 and i <= 9) {
			cout << words[i-1] << endl;
		}
		else if (i > 9)  {
			if (i % 2 == 0)
				cout << "even" << endl;
			else
				cout << "odd" << endl;
		}
		
	}
	return 0;
}

