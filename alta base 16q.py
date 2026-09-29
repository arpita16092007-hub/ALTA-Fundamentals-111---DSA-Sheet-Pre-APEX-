def is_palindrome(num):
    # Store the original number to compare later
    original_num = num
    reversed_num = 0
    
    # Loop to reverse the digits of the number
    while num > 0:
        remainder = num % 10
        reversed_num = (reversed_num * 10) + remainder
        num = num // 10
        
    # Check if the original number and reversed number are the same
    if original_num == reversed_num:
        return "Palindrome"
    else:
        return "Not a Palindrome"

# Test with the input 121
input_number = 121
result = is_palindrome(input_number)

print(f"Input: {input_number}")
print(f"Output: {result}")
