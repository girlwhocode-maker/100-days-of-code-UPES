/*
Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>

int main() {
    int a, b, lcm;

    scanf("%d %d", &a, &b);  // Input two numbers

    // Start from the maximum of a and b
    lcm = (a > b) ? a : b;

    // Loop until we find LCM
    while(1) {
        if(lcm % a == 0 && lcm % b == 0) {
            break;  // Found LCM
        }
        lcm++;
    }

    printf("%d\n", lcm);  // Output LCM

    return 0;
}


















  





