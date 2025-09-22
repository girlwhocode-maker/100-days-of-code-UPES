/*
Q33 (Loops without Arrays/Strings)
Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, digits = 0;
    
    scanf("%d", &n);      // Input number
    original = n;          // Store original number
    int temp = n;

    // Count number of digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    // Calculate sum of digits^digits
    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if(sum == original) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}














  





