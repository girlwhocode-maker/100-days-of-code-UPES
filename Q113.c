#include <stdio.h>

// Function to sort the array (Bubble Sort)
void sort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, k;

    // Taking size of array
    scanf("%d", &n);

    int arr[n];
    
    // Taking array input
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Taking k
    scanf("%d", &k);

    // Sort the array
    sort(arr, n);

    // Print kth smallest element
    printf("%d", arr[k-1]);

    return 0;
}


