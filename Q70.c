//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);   // size of array
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // input array
    }
    
    scanf("%d", &k);  // rotation count
    k = k % n;        // agar k > n ho toh reduce karne ke liye

    int rotated[n];
    int idx = 0;

    // last k elements ko pehle daal do
    for(int i = n - k; i < n; i++) {
        rotated[idx++] = arr[i];
    }

    // baaki elements ko daal do
    for(int i = 0; i < n - k; i++) {
        rotated[idx++] = arr[i];
    }

    // print rotated array
    for(int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
