// Q109: Maximum sum of all subarrays of size k.
//
// Sample Test Cases:
// Input 1:
// arr = [100, 200, 300, 400], k = 2
// Output 1:
// 700
//
// Input 2:
// arr = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
// Output 2:
// 39
//
// Input 3:
// arr = [100, 200, 300, 400], k = 1
// Output 3:
// 400

#include <stdio.h>

int main() {
    int n, k;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input k
    printf("Enter size of subarray k: ");
    scanf("%d", &k);

    int maxSum = 0;

    // Calculate sum of first subarray of size k
    for(int i = 0; i < k; i++)
        maxSum += arr[i];

    int windowSum = maxSum;
    
    // Slide the window
    for(int i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k];
        if(windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d", maxSum);
    return 0;
}
























