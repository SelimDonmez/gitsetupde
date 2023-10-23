/**
 * @brief program to update two integers using a function.
 *
 * This program takes two integer inputs, updates their values using the `update` function, and then prints the updated values.
 *
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/**
 * @brief Update two integers using pointers.
 *
 * This function takes two pointers to integers as input and updates their values.
 * It calculates the sum of the two integers and assigns it to the first integer (a),
 * while the second integer (b) is assigned the absolute difference between the original values.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */

void update(int* a, int* b);

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

void update(int* a, int* b) {
    int temp;
    temp = *a;
    *a += *b;
    *b = temp - *b;
    if (*b < 0)
        *b *= -1;
}