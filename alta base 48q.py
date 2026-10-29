def is_distinct(s: str) -> bool:
    return len(set(s)) == len(s)

# Example usage:
input_str = 'abcdef'
print(is_distinct(input_str))  # Output: True
