/*
Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main() {
    long long n, reversed = 0, place = 1;

    scanf("%lld", &n);  // Input binary number

    // Find 1's complement in reverse order
    while(n != 0) {
        int digit = n % 10;
        int complement = (digit == 0) ? 1 : 0;
        reversed += complement * place;
        place *= 10;
        n /= 10;
    }

    printf("%lld\n", reversed);  // Output 1's complement

    return 0;
}





















  





