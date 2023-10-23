#include <iostream>

using namespace std;


/**
 * @brief A C++ program to convert a numeric input into words.
 *
 * This program takes an integer input from the user and converts it into its corresponding word representation
 *
 * @param none
 */

int main() {

    int n{ 0 };
    cin >> n;
    

    //! This while loop is checking if the number is greater than 1 or not.
    while (!(n >= 1)) {
        cout << "This number is not greather than 1" << endl;
        cin >> n;
    }

    //! These are if else conditions that convert the number into a word.
    if (n >= 1) {
        if (n == 1) {
            cout << "one";
        }
        else if (n == 2) {
            cout << "two";
        }
        else if (n == 3) {
            cout << "three";
        }
        else if (n == 4) {
            cout << "four";
        }
        else if (n == 5) {
            cout << "five";
        }
        else if (n == 6) {
            cout << "six";
        }
        else if (n == 7) {
            cout << "seven";
        }
        else if (n == 8) {
            cout << "eight";
        }
        else if (n == 9) {
            cout << "nine";
        }
        else {
            cout << "Greater than 9";
        }
    }
    return 0;
}