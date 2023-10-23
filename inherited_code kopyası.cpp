#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/**
 * @class BadLengthException
 *
 * @brief Custom exception class for handling username length errors.
 *
 * This class is used to create a custom exception for handling username length errors.
 * It stores the length of the username that caused the exception and provides a method
 * to retrieve that length.
 */
class BadLengthException {
    int m; /**< The length of the username that caused the exception. */

public:
    /**
     * @brief Constructor for the BadLengthException class.
     *
     * @param n The length of the username that caused the exception.
     */
    BadLengthException(int n) {
        m = n;
    }

    /**
     * @brief Method to retrieve the length of the username that caused the exception.
     *
     * @return The length of the username that triggered the exception.
     */
    int what() {
        return m;
    }
};

/**
 * @brief Function to check the validity of a username.
 *
 * This function checks the validity of a username by verifying its length and
 * ensuring it does not contain consecutive 'w' characters.
 *
 * @param username The username to be checked.
 * @return True if the username is valid, false otherwise.
 */
bool checkUsername(string username) {
    bool isValid = true;
    int n = username.length();
    if (n < 5) {
        throw BadLengthException(n);
    }
    for (int i = 0; i < n - 1; i++) {
        if (username[i] == 'w' && username[i + 1] == 'w') {
            isValid = false;
        }
    }
    return isValid;
}

/**
 * @brief Main function that reads and checks usernames.
 *
 * This program reads the number of test cases, then for each test case, it reads
 * a username and checks its validity using the checkUsername function. It handles
 * exceptions related to username length and prints the result.
 */
int main() {
    int T;
    cin >> T;
    while (T--) {
        string username;
        cin >> username;
        try {
            bool isValid = checkUsername(username);
            if (isValid) {
                cout << "Valid" << '\n';
            } else {
                cout << "Invalid" << '\n';
            }
        } catch (BadLengthException e) {
            cout << "Too short: " << e.what() << '\n';
        }
    }
    return 0;
}

