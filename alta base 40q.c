#include <stdio.h>

void sortSquares(int nums[], int n, int result[]) {
    int left = 0;
    int right = n - 1;
    int index = n - 1; // Start filling the result array from the end

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[index] = leftSquare;
            left++;  // Move the left pointer forward
        } else {
            result[index] = rightSquare;
            right--; // Move the right pointer backward
        }
        index--; // Move to the next position towards the front
    }
}

int main() {
    int nums[] = {-4, -1, 0, 3, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result[n]; // Array to hold the sorted squares

    // Run the function
    sortSquares(nums, n, result);

    // Print the output
    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    return 0;
}
