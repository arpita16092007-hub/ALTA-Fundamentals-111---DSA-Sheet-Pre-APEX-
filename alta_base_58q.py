def selection_sort(arr):
    n = len(arr)
    
    for i in range(n):
        # Assume the current position holds the minimum element
        min_idx = i
        
        # Find the actual minimum element in the remaining unsorted array
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
                
        # Swap the found minimum element with the first unsorted element
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
        
    return arr

# Example Usage:
input_arr = [64, 25, 12, 22, 11]
print(selection_sort(input_arr))  # Output: [11, 12, 22, 25, 64]
