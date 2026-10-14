#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int size = 3; // Number of elements in the array
    int isSorted = 1; // 1 means true (sorted), 0 means false (not sorted)

    // Check if any element is bigger than the next one
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0; // Found a breakdown in order
            break;        // Stop checking immediately
        }
    }

    // Print the result based on the flag
    if (isSorted == 1) {
        printf("The output is:True\n");
    } else {
        printf("false\n");
    }

    return 0;
}
