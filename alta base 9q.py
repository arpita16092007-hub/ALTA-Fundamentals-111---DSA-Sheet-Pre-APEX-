w=float(input("enter weight(kg):"))
m=float(input("enter height(m):"))

bmi=w/(m**2)


if bmi<18.5:
    print("underweight")
elif bmi>=18.5 and bmi<=24.9:
     print("normal")
elif bmi>=25 and bmi<=29.9:
      print("overweight")
else:
     print("obese")
