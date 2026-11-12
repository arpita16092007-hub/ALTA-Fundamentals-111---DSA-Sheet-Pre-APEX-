#include <stdio.h>
#include <stdlib.h>

long long mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i = left;      // Index for left subarray
    int j = mid + 1;   // Index for right subarray
    int k = left;      // Index for merged array
    long long inv_count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            // Since arr[left...mid] is sorted, all elements from i to mid are > arr[j]
            inv_count += (mid - i + 1);
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}

long long mergeSortAndCount(int arr[], int temp[], int left, int right) {
    long long inv_count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        inv_count += mergeSortAndCount(arr, temp, left, mid);
        inv_count += mergeSortAndCount(arr, temp, mid + 1, right);
        inv_count += mergeAndCount(arr, temp, left, mid, right);
    }
    return inv_count;
}

long long countInversions(int arr[], int n) {
    int* temp = (int*)malloc(n * sizeof(int));
    if (!temp) return 0;

    long long total_inversions = mergeSortAndCount(arr, temp, 0, n - 1);
    
    free(temp);
    return total_inversions;
}

int main() {
    int arr[] = {8, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Output: %lld\n", countInversions(arr, n));
    return 0;
}
