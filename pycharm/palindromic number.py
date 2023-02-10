s=int(input("Enter any number of your choice : "))
a=[]
x=s
for i in range(0,4):
    a.append(x%10)
    x=x//10;
print(a)