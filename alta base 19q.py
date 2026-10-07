def print_numbers(n):
    for i in range(1, n + 1):
        # Check if the number is a multiple of 3
        if i % 3 == 0:
            continue
        print(i, end=" ")
    print()  # For a new line at the end

# Example usage with N = 10
N = 10
print_numbers(N)
