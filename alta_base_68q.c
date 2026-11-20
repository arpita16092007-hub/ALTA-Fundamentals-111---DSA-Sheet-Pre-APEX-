#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Comparator function required by qsort for ascending order
int compare(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);
    
    if (int_a == int_b) return 0;
    return (int_a < int_b) ? -1 : 1;
}

int findMinDiff(int packets[], int n, int m) {
    if (m == 0 || n == 0) {
        return 0;
    }
    if (n < m) {
        return -1; // Not enough packets for every student
    }

    // Sort the array in ascending order
    qsort(packets, n, sizeof(int), compare);

    int min_diff = INT_MAX;

    // Slide a window of size m across the sorted array
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = packets[i + m - 1] - packets[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    return min_diff;
}

int main() {
    int packets[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(packets) / sizeof(packets[0]);
    int m = 3;

    int result = findMinDiff(packets, n, m);
    printf("Minimum difference is %d\n", result);

    return 0;
}
