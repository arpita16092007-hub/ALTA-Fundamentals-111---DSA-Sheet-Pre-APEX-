def fibonacci(n):
    # Base cases
    if n <= 0:
        return 0
    elif n == 1 or n == 2:
        return 1
    # Plain recursive relationship
    return fibonacci(n - 1) + fibonacci(n - 2)
# Example execution
print(fibonacci(6))  # Output: 8
