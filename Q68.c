//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, pos;
    
    // Input size
    scanf("%d", &n);
    
    int arr[100];  // large enough size
    
    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input position to delete
    scanf("%d", &pos);
    
    // Shift elements left from pos
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--; // size reduced
    
    // Print updated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}


