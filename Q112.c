// Q112: Maximum sum of contiguous subarray using Kadane's algorithm.
//
// Sample Test Cases:
// Input 1:
// arr = [2, 3, -8, 7, -1, 2, 3]
// Output 1:
// 11
//
// Input 2:
// arr = [-2, -4]
// Output 2:
// -2
//
// Input 3:
// arr = [5, 4, 1, 7, 8]
// Output 3:
// 25

#include <stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSoFar = arr[0];
    int currMax = arr[0];

    for(int i = 1; i < n; i++) {
        if(currMax + arr[i] > arr[i])
            currMax = currMax + arr[i];
        else
            currMax = arr[i];

        if(currMax > maxSoFar)
            maxSoFar = currMax;
    }

    printf("%d", maxSoFar);
    return 0;
}



























