/**
 * @file main.cpp
 * @brief A C++ program demonstrating the use of the Box class.
 *
 * This program defines a `Box` class that represents a three-dimensional box with length, breadth, and height.
 * It provides methods to set dimensions, calculate volume, compare boxes, and output box information.
 * The program uses the `Box` class in the `check2` function to demonstrate various operations on boxes based on user input.
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

class Box {
 private:
  /**
     * @brief Overload the output stream operator to print box information.
     *
     * @param out The output stream.
     * @param operand The box to print.
     * @return The output stream after printing the box information.
     */
    friend ostream& operator<<(ostream& out, Box& operand) {
        out << operand.l << " " << operand.b << " " << operand.h;
        return out;
    }
private:
    int l;
    int b;
    int h;
public:
    /**
    * @brief Default constructor for the Box class.
    * Initializes dimensions to 0.
    */
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }
    /**
    * @brief Parameterized constructor for the Box class.
    * Initializes dimensions with the provided values.
    *
    * @param length The length of the box.
    * @param breadth The breadth of the box.
    * @param height The height of the box.
    */
    Box(int length, int breadth, int height)
        :l(length), b(breadth), h(height) {

    }
    /**
    * @brief Copy constructor for the Box class.
    * Copies dimensions from another Box.
    *
    * @param B The Box to copy from.
    */
    Box(const Box& B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    /**
    * @brief Get the length of the box.
    *
    * @return The length of the box.
    */
    int getLength()  {
        return l;
    }

    /**
    * @brief Get the breadth of the box.
    *
    * @return The breadth of the box.
    */
    int getBreadth()  {
        return b;
    }
    /**
    * @brief Get the height of the box.
    *
    * @return The height of the box.
    */
    int getHeight()  {
        return h;
    }
    /**
     * @brief Calculate the volume of the box.
     *
     * @return The volume of the box as a long long integer.
     */
    long long CalculateVolume() {
        return ((long long)l * b * h);
    }
    /**
    * @brief Overload the less-than operator to compare boxes.
    * Compares boxes based on their dimensions.
    *
    * @param C The first box for comparison.
    * @param D The second box for comparison.
    * @return true if C is smaller than D, false otherwise.
    */
    friend bool operator<(Box&  C, Box&  D) {
        if ((C.l < D.l) or ((C.b < D.b) and C.l == D.l) or ((C.h < D.h) and (C.b == D.b) and (C.l == D.l))) {
            return(true);
        }
        else {
            return(false);
        }
    }
   
};
/**
 * @brief Perform various operations on boxes based on user input.
 */
void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }

    }
}

int main()
{
    check2();
}