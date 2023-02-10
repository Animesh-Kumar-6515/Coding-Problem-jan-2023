n=int(input("Enter the number of students :"))
x=int(input("Enter the minimum gram of ingredient"))
for i in range(n):
    A=int(input("Enter the number of grams student added in dish"))
    if (A>=x):
        print("chef liked the dish ")
    else:
        print("Chef didn't liked it !!")
