// Q107: Find the previous greater element for each element in the array (brute force).
//
// Sample Test Cases:
// Input 1:
// arr = [1, 3, 2, 4]
// Output 1:
// -1, -1, 3, -1
//
// Input 2:
// arr = [6, 8, 0, 1, 3]
// Output 2:
// -1, -1, 8, 8, 8
//
// Input 3:
// arr = [1, 2, 3, 5]
// Output 3:
// -1, -1, -1, -1
//
// Input 4:
// arr = [5, 4, 3, 1]
// Output 4:
// -1, 5, 4, 3

#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Previous greater elements: ");
    for(int i = 0; i < n; i++) {
        int prev = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if(i != n - 1)
            printf(", ");
    }
    
    return 0;
}






















