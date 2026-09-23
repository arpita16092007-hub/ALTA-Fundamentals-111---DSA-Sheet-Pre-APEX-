# Inputs
day = int(input("enter a day:"))
month = int(input("enter a month:"))
year = int(input("enter a year:"))

# 1. Check if the year or month is fundamentally out of range
if year < 1 or year > 9999 or month < 1 or month > 12 or day < 1:
    print("Invalid Date")

else:
    # 2. Handle February and Leap Year logic
    if month == 2:
        #check A year is a leap year 
        if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
            max_days = 29
        else:
            max_days = 28
            
    # 3. Handle months with 30 days
    elif month == 4 or month == 6 or month == 9 or month == 11:
        max_days = 30
        
    # 4. Handle months with 31 days
    else:
        max_days = 31


    if day <= max_days:
        print("Valid Date")
    else:
        print("Invalid Date")
