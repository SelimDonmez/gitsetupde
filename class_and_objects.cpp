/**
 * @file main.cpp
 * @brief A C++ program to handle student scores and calculate how many students scored higher than Kristen.
 *
 * This program defines a `Student` class with methods for inputting scores and calculating the total score.
 * It reads information for a group of students, calculates Kristen's total score, and then determines how many students scored higher than Kristen.
 *
 * @param none
 * @return 0 
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
private:
    int scores[5];
public:
    /**
    * @brief Input scores for a student.
    */
    void input() {
        for (size_t i{ 0 }; i < 5; i++) {
            cin >> scores[i];
       }
    }
    /**
    * @brief Calculate the total score of a student.
    *
    * @return The sum of all scores for the student.
    */
    int calculateTotalScore() {
        int sum{ 0 };
        for (size_t i{ 0 }; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student* s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;

    delete[] s; //Deallocate the dynamically allocated memory 
    return 0;
}
