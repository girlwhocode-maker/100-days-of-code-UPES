/*
Q34 (Loops without Arrays/Strings)
Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/

#include <stdio.h>

int main() {
    int n, isPrime = 1;

    scanf("%d", &n);  // Input number

    if(n <= 1) {
        isPrime = 0;   // Numbers <= 1 are not prime
    } else {
        for(int i = 2; i * i <= n; i++) {  // Check divisibility up to √n
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}















  





