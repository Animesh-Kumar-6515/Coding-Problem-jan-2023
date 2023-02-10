mag="You are a great teacher"
ransom=input("Enter the ransom note : ")
lst=[]
lmag=[]
x=1
lst=ransom.split(' ')
n=len(lst)
print(n)
lmag=mag.split(' ')
n1=len(lmag)
print(lmag,lst)
for i in range(1,n):
    for j in range(1,n1):
        if (lst[i]==lmag[j]):
            x=x+1
print (x)
if x==n:
    print("yes")
else:
    print("no")


