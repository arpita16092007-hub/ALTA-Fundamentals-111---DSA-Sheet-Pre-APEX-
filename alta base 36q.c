#include <stdio.h>
// Function to find the maximum consecutive 1s
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max_count = 0;
    int current_count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            current_count++;
            if (current_count > max_count) {
                max_count = current_count;
            }
        } else {
            current_count = 0; // Reset count when a 0 is found
        }
    }
    return max_count;
}
int main() {
    int nums[] = {1, 1, 0, 1, 1, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int result = findMaxConsecutiveOnes(nums, numsSize);
    printf("Output: %d\n", result);
    return 0;
}
