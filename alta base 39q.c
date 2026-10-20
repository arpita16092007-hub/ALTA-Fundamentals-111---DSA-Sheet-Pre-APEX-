#include <stdio.h>

void printUnion(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        // Skip duplicate elements in arr1
        while (i > 0 && i < n && arr1[i] == arr1[i - 1]) i++;
        // Skip duplicate elements in arr2
        while (j > 0 && j < m && arr2[j] == arr2[j - 1]) j++;

        if (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                printf("%d ", arr1[i++]);
            } else if (arr2[j] < arr1[i]) {
                printf("%d ", arr2[j++]);
            } else {
                printf("%d ", arr1[i]);
                i++;
                j++;
            }
        }
    }

    // Print remaining elements of arr1
    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i - 1]) {
            printf("%d ", arr1[i]);
        }
        i++;
    }

    // Print remaining elements of arr2
    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1]) {
            printf("%d ", arr2[j]);
        }
        j++;
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    printf("Union: ");
    printUnion(arr1, n, arr2, m);

    return 0;
}
