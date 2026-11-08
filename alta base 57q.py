def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False
        # Last i elements are already in place
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        # If no elements were swapped in the inner loop, then array is sorted
        if not swapped:
            break
    return arr

# Execution
print(bubble_sort([5, 1, 4, 2, 8]))  # Output: [1, 2, 4, 5, 8]
