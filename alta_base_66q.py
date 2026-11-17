def sort_binary_array(arr: list[int]) -> list[int]:
    left = 0
    right = len(arr) - 1
    
    while left < right:
        if arr[left] == 0:
            left += 1
        elif arr[right] == 1:
            right -= 1
        else:
            # arr[left] is 1 and arr[right] is 0 -> swap them
            arr[left], arr[right] = arr[right], arr[left]
            left += 1
            right -= 1
            
    return arr

# Example usage
nums = [0, 1, 0, 1, 1, 0]
print(sort_binary_array(nums))  # Output: [0, 0, 0, 1, 1, 1]
