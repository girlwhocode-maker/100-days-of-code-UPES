// Q110: Maximum element in each subarray of size k (sliding window, brute force).
//
// Sample Test Cases:
// Input 1:
// arr = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3
// Output 1:
// 3 3 4 5 5 5 6
//
// Input 2:
// arr = [5, 1, 3, 4, 2], k = 1
// Output 2:
// 5 1 3 4 2

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

    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }
        printf("%d", max);
        if(i != n - k)
            printf(" ");
    }

    return 0;
}

























