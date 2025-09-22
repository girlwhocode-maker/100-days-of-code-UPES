/*
Q36 (Loops without Arrays/Strings)
Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/

#include <stdio.h>

int main() {
    int a, b, hcf;

    scanf("%d %d", &a, &b);  // Input two numbers

    // Loop from 1 to smaller of a and b
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;  // Keep updating the highest factor
        }
    }

    printf("%d\n", hcf);  // Output HCF

    return 0;
}

















  





