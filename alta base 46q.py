def first_non_repeating_character(s: str) -> str:
    # Step 1: Count frequencies using a standard dictionary
    char_counts = {}
    for char in s:
        char_counts[char] = char_counts.get(char, 0) + 1
    
    # Step 2: Find the first character with a count of 1
    for char in s:
        if char_counts[char] == 1:
            return char
            
    return None

# Example Usage:
input_str = 'leetcode'
output = first_non_repeating_character(input_str)
print(f"Output: '{output}'")  # Output: 'l'
