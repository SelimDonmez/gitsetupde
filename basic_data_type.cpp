#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    
    int intvalue{};
    long longvalue{};
    char charvalue{};
    float floatvalue{};
    double doublevalue{};
    cin >> intvalue >> longvalue >> charvalue >> floatvalue >> doublevalue;
    //! we can set the precision of our output in the terminal to see digit number we want
    cout << setprecision(9);
    cout << intvalue << "\n" 
          << longvalue << "\n"
           << charvalue << "\n"
            << floatvalue << "\n"
             << doublevalue;


    return 0;
}