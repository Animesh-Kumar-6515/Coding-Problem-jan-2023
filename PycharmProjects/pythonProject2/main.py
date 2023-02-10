x=int(input("Please enter the first number   "))
y=int(input("please enter the second number  "))
z=int(input("please enter the third number   "))
if((x==y) and (y==z)):
    print("The numer you have enterd are equal")
if((x>y) and (x>z)):
    print(x,"  is the largest number")
if((y>x) and (y>z)):
    print(y,"  is the largest number")
if((z>y) and (z>x)):
    print(z," is the largest number")
