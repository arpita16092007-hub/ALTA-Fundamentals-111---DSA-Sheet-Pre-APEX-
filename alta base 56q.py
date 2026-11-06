def linear_search(arr, target):
    # Scan from left to right tracking index and value
    for index, value in enumerate(arr):
        if value == target:
            return index
    return -1  # Return -1 if target is not found

# Input data
arr = [5, 3, 8, 1]
target = 8

# Output: 2
print(linear_search(arr, target))
