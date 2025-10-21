// Q102: Find the index of the smallest element in a sorted array that is greater than or equal to x (ceil of x).
//
// Sample Test Cases:
// Input 1:
// arr = [1, 2, 8, 10, 11, 12, 19], x = 5
// Output 1:
// 2
//
// Input 2:
// arr = [1, 2, 8, 10, 11, 12, 19], x = 20
// Output 2:
// -1
//
// Input 3:
// arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
// Output 3:
// 0
//
// Input 4:
// arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
// Output 4:
// 2

#include <stdio.h>

int main() {
    int n, x;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    
    // Input array elements
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    // Input x
    printf("Enter x: ");
    scanf("%d", &x);

    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;
            break; // First occurrence of ceil
        }
    }

    printf("%d", index);
    return 0;
}

















