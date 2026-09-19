'''Write a program to find and print the largest of 
three given numbers using nested if-else.
 Input: 4 9 6  Output: 9'''


a=int (input("enter a 1st num:"))
b=int (input("enter a 2nd num:"))
c=int (input("enter a 3rd num:"))

if a>b and a>c:
    print (a,"is a largest num")
elif b>a and b>c:
    print(b,"is a largest num")
else:
    print(c,"is a largest num")
    