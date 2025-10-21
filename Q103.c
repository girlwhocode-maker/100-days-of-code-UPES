// Q103: Find the pivot index of an array where left sum equals right sum.
//
// Sample Test Cases:
// Input 1:
// nums = [1,7,3,6,5,6]
// Output 1:
// 3
//
// Input 2:
// nums = [1,2,3]
// Output 2:
// -1
//
// Input 3:
// nums = [2,1,-1]
// Output 3:
// 0

#include <stdio.h>

int main() {
    int n;
    
    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    int totalSum = 0;
    for(int i = 0; i < n; i++)
        totalSum += nums[i];
    
    int leftSum = 0;
    int pivot = -1;
    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if(leftSum == rightSum) {
            pivot = i;
            break; // leftmost pivot
        }
        leftSum += nums[i];
    }
    
    printf("%d", pivot);
    return 0;
}


















