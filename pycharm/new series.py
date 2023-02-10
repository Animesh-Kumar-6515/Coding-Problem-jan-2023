#1,1,2,3,4,9,8,27.......
#1,2,3,4,5,6,7,8
a=[]
n=int(input("Enter any number : "))
for i in range(0,n):
            a.append(2**i)
            a.append(3**i)
print(a[n-1])