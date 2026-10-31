def factorial(n):
    # Base case: 0! and 1! are both equal to 1
    if n == 0 or n == 1:
        return 1
    # Recursive step: n! = n * (n - 1)!
    else:
        return n * factorial(n - 1)
# Input
N = 5
print(factorial(N))  # Output: 120
