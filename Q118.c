#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int sumArr = 0;

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sumArr += arr[i];
    }

    // Expected sum from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Missing number
    int missing = totalSum - sumArr;

    printf("%d", missing);

    return 0;
}

