/**
 * 
 * @brief A C++ program to create and display a student structure with lowercase names.
 *
 * This program defines a `Student` structure to store student information, including age, first name, last name, and standard.
 * It reads input values for these fields, converts the first and last names to lowercase using the `toLow` function,
 * and then displays the student's information in lowercase.
 *
 * @param no parameter
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

/**
 * @brief Convert a string to lowercase.
 *
 * This function takes a string as input and converts all its characters to lowercase.
 *
 * @param s The string to be converted to lowercase.
 * @return The same string with all characters in lowercase.
 */
string toLow(string& s);

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    toLow(st.first_name);
    toLow(st.last_name);

    cout << st.age << " " 
            << st.first_name << " " 
               << st.last_name << " " 
                 << st.standard;

    return 0;
}

string toLow(string& s) {
    for (auto& x : s) {
        x = tolower(x);
    }
    return s;
}