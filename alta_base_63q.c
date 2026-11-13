#include <stdio.h>
#include <stdlib.h>

// Comparator for sorting in ascending order
int compareAsc(const void* a, const void* b) {
    int num1 = *(const int*)a;
    int num2 = *(const int*)b;
    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    return 0;
}

int findKthSmallest(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), compareAsc);
    return arr[k - 1];
}

int findKthLargest(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), compareAsc);
    return arr[n - k];
}

int main(void) {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("3rd smallest: %d\n", findKthSmallest(arr, n, k));
    printf("3rd largest: %d\n", findKthLargest(arr, n, k));

    return 0;
}
