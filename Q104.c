// Q104: Find the pivot integer x such that sum(1 to x) = sum(x to n)
//
// Sample Test Cases:
// Input 1:
// n = 8
// Output 1:
// 6
//
// Input 2:
// n = 1
// Output 2:
// 1
//
// Input 3:
// n = 4
// Output 3:
// -1

#include <stdio.h>

int main() {
    int n;
    
    // Input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    int totalSum = n * (n + 1) / 2; // sum of 1 to n
    int leftSum = 0;
    int pivot = -1;
    
    for(int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - (leftSum - x); // sum from x to n
        if(leftSum == rightSum) {
            pivot = x;
            break;
        }
    }
    
    printf("%d", pivot);
    return 0;
}



















