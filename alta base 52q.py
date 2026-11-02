def sum_of_digits(n: int) -> int:
    # Base Case: if the number becomes 0, return 0
    if n == 0:
        return 0
    # Recursive Case: Last digit + sum of remaining digits
    return (n % 10) + sum_of_digits(n // 10)
num = 1234
print(sum_of_digits(num))  # Output: 10
