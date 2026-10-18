#include <stdio.h>

int main() {
    int arr[] = {1, 4, 3, 2, 6, 5};
    int size = 6; // Explicitly defining the array size

    int start = 0;
    int end = size - 1;

    // Reverse the array in place
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
