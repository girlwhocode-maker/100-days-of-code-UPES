// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    
    // Input number
    scanf("%d", &num);
    
    lastDigit = num % 10; // last digit
    digits = (int)log10(num); // total digits - 1
    firstDigit = num / pow(10, digits); // first digit
    
    // If number has only 1 digit, swapping doesn't change anything
    if (num < 10) {
        printf("%d", num);
        return 0;
    }
    
    // Remove first digit and put 0 in its place
    swappedNum = num % (int)pow(10, digits);
    
    // Remove last digit
    swappedNum = swappedNum / 10;
    
    // Add last digit at the beginning and first digit at the end
    swappedNum = lastDigit * pow(10, digits) + swappedNum * 10 + firstDigit;
    
    printf("%d", swappedNum);
    return 0;
}

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/






















  





