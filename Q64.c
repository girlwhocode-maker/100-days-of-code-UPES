// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main() {
    long long num, temp;
    int count[10] = {0};
    int i, maxCount = 0, mostFreqDigit = 0;

    // Input number
    scanf("%lld", &num);
    temp = num;

    // Count frequency of each digit
    while(temp > 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // Find digit with maximum frequency
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            mostFreqDigit = i;
        }
    }

    printf("%d\n", mostFreqDigit);

    return 0;
}







































  





