#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

/**
 * @brief Parses a string containing space-separated integers into a vector of integers.
 *
 * This function takes a string of space-separated integers, extracts and converts them
 * into individual integers, and stores them in a vector. It returns the vector of integers.
 *
 * @param str The input string containing space-separated integers.
 * @return A vector of integers extracted from the input string.
 */
vector<int> parseInts(string str) {
    vector<int> a;
    stringstream ss(str);

    char ch;
    int temp;
    while (ss >> temp) {
        a.push_back(temp);
        ss >> ch;
    }
    return a;
}

/**
 * @brief Main function that reads an input string, parses it, and prints the integers.
 *
 * This program reads an input string, parses it into a vector of integers, and then
 * prints each integer to the standard output.
 */
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str); // Parse the input string
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n"; // Print each integer
    }
    
    return 0;
}

