#include <stdio.h>

// Function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the left by d positions
void leftRotate(int arr[], int n, int d) {
    if (n == 0) return;
    
    // In case the rotating factor is greater than array length
    d = d % n; 
    
    // Step 1: Reverse the first d elements
    reverse(arr, 0, d - 1);
    
    // Step 2: Reverse the remaining n-d elements
    reverse(arr, d, n - 1);
    
    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    printf("Original array: ");
    printArray(arr, n);

    leftRotate(arr, n, d);

    printf("Rotated array: ");
    printArray(arr, n);

    return 0;
}
