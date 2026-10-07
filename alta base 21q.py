def add(a, b):
    if type(a) is int and type(b) is int:
        print("Adding two integers:")
        return a + b
        
    elif type(a) is float and type(b) is float:
        print("Adding two floats:")
        return a + b
        
    else:
        return "Please provide either two integers or two floats."

# --- Testing the code ---
print(add(5, 10))      # Output: Adding two integers: 15
print(add(5.5, 2.3))  # Output: Adding two floats: 7.8
print(add(5, 2.3))    # Output: Please provide either two integers or two floats.