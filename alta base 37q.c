#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced. 
 * The caller is responsible for freeing the memory.
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    
    // Return NULL if no solution is found
    *returnSize = 0;
    free(result);
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* indices = twoSum(nums, numsSize, target, &returnSize);

    if (indices != NULL && returnSize == 2) {
        printf("Output: [%d, %d]\n", indices[0], indices[1]);
        free(indices); // Free allocated memory
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
