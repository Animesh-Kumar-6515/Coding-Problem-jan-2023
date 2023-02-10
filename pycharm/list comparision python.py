n=int(input("Enter any number for sum : "))
x=int(input("Enter the first number : "))
y=int(input("Enter the second number : "))
z=int(input("Enter the third number : "))
arr=[]
arr1=[]
for i in range(0,x+1):
    arr1.append(i)
    for j in range(0,y+1):
        arr1.append(j)
        for k in range(0,z+1):
            arr1.append(k)
print (arr1)

