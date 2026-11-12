def partition(arr: list[int], low: int, high: int) -> int:
    pivot = arr[high]  # Pick the last element as pivot
    i = low - 1        # Pointer for the smaller element boundary

    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quick_sort(arr: list[int], low: int, high: int) -> None:
    if low < high:
        pi = partition(arr, low, high)

        # Recursively sort elements before and after partition
        quick_sort(arr, low, pi - 1)
        quick_sort(arr, pi + 1, high)

if __name__ == "__main__":
    arr = [10, 7, 8, 9, 1, 5]
    quick_sort(arr, 0, len(arr) - 1)
    print("Sorted array:", arr)  # Output: [1, 5, 7, 8, 9, 10]
