def check_prime(num):
    # 1 or smaller numbers are never prime
    if num <= 1:
        return False
        
    # Check numbers from 2 up to num - 1
    for i in range(2, num):
        if num % i == 0:
            return False  # If it divides evenly, it's not prime
            
    return True  # If no number divided it, it is prime

# --- Test the function ---
number_to_check = int(input("enter a number:"))

if check_prime(number_to_check):
    print(number_to_check, "is a prime number")
else:
    print(number_to_check, "is NOT a prime number")
