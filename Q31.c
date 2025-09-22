/*
Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main() {
    int n;
    long long binary = 0;
    int place = 1;  // To keep track of binary digit place

    scanf("%d", &n);  // Input number

    while(n > 0) {
        int bit = n % 2;           // Get last bit
        binary += bit * place;     // Add bit to correct place
        n /= 2;                    // Divide number by 2
        place *= 10;               // Move to next place in binary
    }

    printf("%lld\n", binary);  // Output binary number

    return 0;
}












  





