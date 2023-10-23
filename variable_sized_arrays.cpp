/**
 * @file main.cpp
 * @brief A C++ program for handling a dynamic 2D array and answering queries.
 *
 * This program reads two integers, 'n' and 'q', representing the number of 1D arrays and the number of queries, respectively.
 * It then creates a dynamic 2D array 'a' to store 'n' 1D arrays of varying lengths.
 * Each 1D array is populated based on the provided input, and the program answers 'q' queries by printing specific elements of these arrays.
 * Finally, it deallocates the dynamically allocated memory to prevent memory leaks.
 *
 * @param none
 * @return 0 on successful execution
 */

#include <iostream>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    //while loop to check n to want a new entry if is invalid
    //while ((n < 1 or n >= (10 ^ 5)) or (q < 1 and q >= (10 ^ 5))) {
    //    cout << "one of the inputs is not between 1 and 10^5 enter again" << endl;
    //    return 0;
    //}
    

    // Create a dynamic 2D array to store 'n' 1D arrays.
    int** a = new int* [n];

    // Populate the 2D array with 1D arrays.
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;

        ////check if k invalid or valid
        //while ((k < 1) or k>(3*10^5)) {
        //    cout << "k is invalid" << endl;
        //    return 0;
        //}

        // Create a 1D array and fill it with elements.
        int* array = new int[k];
        for (int j = 0; j < k; j++) {
            cin >> array[j];
        }

        // Assign the 1D array to the 2D array.
        a[i] = array;
    }

    // Answer queries by accessing and printing specific elements.
    for (int numofq = 0; numofq < q; ++numofq) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    // Deallocate the dynamically allocated memory to avoid memory leaks.
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}

