// Q101: Print the first and last occurrence of a target in a sorted array.
//
// Sample Test Cases:
// Input 1:
// nums = [5,7,7,8,8,10], target = 8
// Output 1:
// 3,4
//
// Input 2:
// nums = [5,7,7,8,8,10], target = 6
// Output 2:
// -1,-1
//
// Input 3:
// nums = [5,7,7,8,8,10], target = 10
// Output 3:
// 5,5

#include <stdio.h>

int main() {
    int n, target;
    
    // Taking input for array size
    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    // Taking input for array elements
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    // Taking input for target
    printf("Enter target: ");
    scanf("%d", &target);
    
    int first = -1, last = -1;
    
    for(int i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1) first = i;
            last = i; // keep updating last occurrence
        }
    }
    
    printf("%d,%d", first, last);
    return 0;
}

















