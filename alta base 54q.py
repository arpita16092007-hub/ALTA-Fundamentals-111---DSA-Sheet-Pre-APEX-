def power(base, exp):
    # Base case: any number to the power of 0 is 1
    if exp == 0:
        return 1
    # Recursive step: multiply base by base^(exp - 1)
    return base * power(base, exp - 1)

# Example execution
print(power(2, 5))  # Output: 32
