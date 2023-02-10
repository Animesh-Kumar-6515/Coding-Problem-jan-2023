# WAP to find the number is a prime number or not

x=int(input("Please enter a number "))

for i in range(2,x):
    if ((x%i)==0):
        print("the number is a not prime mumber")
        break
    else:
        print("the number is prime number")
        break
