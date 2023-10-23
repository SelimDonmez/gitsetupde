/**
 * 
 * @brief A C++ program to perform string operations.
 *
 * This program reads two strings, calculates their total length, concatenates them,
 * and then swaps the first characters of the strings using the 'swapp' function.
 * The results of these operations are displayed to the standard output.
 *
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

/**
 * @brief Swap the first characters of two strings.
 *
 * This function takes two string references as input and swaps their first characters.
 *
 * @param a The first string.
 * @param b The second string.
 */

void swapp(string&, string&);

int main() {
    string a, b, sum;
    
    cin >> a;
    cin >> b;
    sum = a + b;
    cout << a.size() << " " << b.size() << endl;
    cout << sum << endl;

    swapp(a, b);
    
    cout << a << " " << b;

    return 0;
}

void swapp(string& a, string& b) {
    char temp[1];

    temp[0] = a[0];
    a[0] = b[0];
    b[0] = temp[0];
}