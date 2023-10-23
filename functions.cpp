
/**
 * @brief A C++ program to find the maximum of four integers.
 *
 * This program takes four integer inputs and finds the maximum of those four numbers using the `max_of_four` function.
 * It then prints the maximum value.
 *
 * @param none
 * 
 */

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/**
 * @brief Find the maximum of four integers.
 *
 * This function takes four integers as input and finds the maximum among them.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @param c The third integer.
 * @param d The fourth integer.
 * @return The maximum integer among the four inputs.
 */

int max_of_four(int, int, int, int);

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    cout << ans;

    return 0;
}

int max_of_four(int a, int b, int c, int d) {
    int biggest = a;
    int Collection[3] = { b,c,d };
    for (int i = 0; i < 3; i++) {
        if (biggest > Collection[i])
            continue;
        else
            biggest = Collection[i];
    }
    return biggest;
}