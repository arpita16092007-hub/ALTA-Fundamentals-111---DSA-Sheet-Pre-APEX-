# Loop through numbers starting from 1 up to a reasonable limit
for number in range(1, 100):
    if number % 7 == 0:
        print(f"The first number divisible by 7 is: {number}")
        break  # Stops the loop completely
