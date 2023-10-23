/**
 * 
 * @brief A simple C++ program to calculate the sum of three integers.
 *
 * This program takes three integer inputs from the user, calculates their sum,
 * and then displays the result to the standard output.
 *
 * @param none
 * @return 0 on successful execution
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int a, b, c;

    cin >> a >> b >> c;
    int result = a + b + c;
    cout << result;

    return 0;
}
