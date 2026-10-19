#include <stdio.h>
#include <stdlib.h>

// Helper function to compare elements for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    // 1. Sort both arrays to use the two-pointer technique
    qsort(nums1, nums1Size, sizeof(int), compare);
    qsort(nums2, nums2Size, sizeof(int), compare);
    
    // Allocate maximum possible memory for the intersection array
    int maxIntersectionSize = (nums1Size < nums2Size) ? nums1Size : nums2Size;
    int* result = (int*)malloc(maxIntersectionSize * sizeof(int));
    *returnSize = 0;
    
    int i = 0, j = 0;
    
    // 2. Use two pointers to find common elements
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else {
            // Found a match. Check if it's already added to avoid duplicates.
            if (*returnSize == 0 || result[*returnSize - 1] != nums1[i]) {
                result[*returnSize] = nums1[i];
                (*returnSize)++;
            }
            i++;
            j++;
        }
    }
    
    return result;
}

int main() {
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize;
    
    int* result = intersection(nums1, nums1Size, nums2, nums2Size, &returnSize);
    
    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
        if (i < returnSize - 1) printf(", ");
    }
    printf("]\n");
    
    // Free the dynamically allocated memory
    free(result);
    
    return 0;
}
