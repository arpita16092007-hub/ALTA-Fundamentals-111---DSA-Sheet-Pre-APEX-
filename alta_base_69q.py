from typing import List


def find_subarray_with_sum(arr: List[int], target: int) -> List[int]:
  left = 0
  current_sum = 0

  for right in range(len(arr)):
    # Expand the window by adding the current element
    current_sum += arr[right]

    # Shrink the window from the left if the sum exceeds the target
    while current_sum > target and left < right:
      current_sum -= arr[left]
      left += 1

    # Check if the current window matches the target sum
    if current_sum == target:
      return [left, right]

  return [-1]  # Return [-1] if no valid subarray is found


# Example usage
arr = [1, 4, 20, 3, 10, 5]
target = 33
print(find_subarray_with_sum(arr, target))  # Output: [2, 4]
