
year=int(input("enter the year:"))
if ( year%400==0)or (year%4==0 and year%100 !=0):
    print ("it is a leap year.")

else:
    print("it isn't a leap year.")
