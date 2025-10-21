// Q105: Find the majority element in an array (appears more than n/2 times).
//
// Sample Test Cases:
// Input 1:
// nums = [3,2,3]
// Output 1:
// 3
//
// Input 2:
// nums = [2,2,1,1,1,2,2]
// Output 2:
// 2
//
// Input 3:
// nums = [2,2,1,1,1,2,2,3]
// Output 3:
// -1

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
    
    int candidate = nums[0], count = 1;
    
    // Boyer-Moore Voting Algorithm
    for(int i = 1; i < n; i++) {
        if(nums[i] == candidate)
            count++;
        else
            count--;
        
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }
    
    // Verify if candidate is majority
    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate)
            count++;
    }
    
    if(count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");
    
    return 0;
}




















