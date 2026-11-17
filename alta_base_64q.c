#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

bool hasPairWithSum(int arr[], int n, int target) {
    // Sort the array in case the input is not already sorted
    qsort(arr, n, sizeof(int), compare);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int current_sum = arr[left] + arr[right];

        if (current_sum == target) {
            printf("Pair found: (%d + %d)\n", arr[left], arr[right]);
            return true;
        } else if (current_sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 16;

    if (hasPairWithSum(arr, n, target)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
