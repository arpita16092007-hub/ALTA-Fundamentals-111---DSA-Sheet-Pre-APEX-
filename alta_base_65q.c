#include <stdio.h>

void rearrangeNegatives(int* arr, int n) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        if (arr[left] < 0) {
            left++;
        } else if (arr[right] >= 0) {
            right--;
        } else {
            // arr[left] is non-negative and arr[right] is negative
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrangeNegatives(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Output: -1 -7 -3 4 5 6 2 8 9
    return 0;
}
