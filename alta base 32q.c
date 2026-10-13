#include <stdio.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Handle small array sizes immediately
    if (size < 2) {
        printf("Output: -1\n");
        return 0;
    }

    // Initialize with a value lower than the expected inputs
    int first = -1;
    int second = -1;

    // Single loop to find both largest and second largest elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] < first && arr[i] > second) {
            second = arr[i];
        }
    }

    // Print the final result
    if (second == -1) {
        printf("Output: -1\n");
    } else {
        printf("Output: %d\n", second);
    }
    return 0;
}
