def is_palindrome(s: str) -> bool:
    # Helper function to track the two shrinking pointers
    def check_pointers(left: int, right: int) -> bool:
        # Base Case: Pointers have crossed or met, meaning all characters matched
        if left >= right:
            return True
        # If characters at the current pointers don't match, it's not a palindrome
        if s[left] != s[right]:
            return False
        
        # Recursive Case: Shrink pointers inward
        return check_pointers(left + 1, right - 1)

    # Initialize pointers at the boundaries of the string
    return check_pointers(0, len(s) - 1)

# Example Usage:
print(is_palindrome('madam'))  # Output: True
