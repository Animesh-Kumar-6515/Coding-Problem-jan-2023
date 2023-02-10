# arr[]
# n=int(input("Enter a number of your choice :"))
# for i in range(n):
#     arr.append(int(input("Enter element : ")))

def rotation(arr,l,r):
    ar=[]
    sum=0
    for i in range(l,r+1):
        ar.append(arr[i])
        arr.pop(i)
    ar.append(arr)
    for i in range(0 , r):
        sum=sum+(i*ar[i])
    return sum




maxi=0
l=[]
n=int(input("Enter a number of your choice :"))
# rot=int(input("Enter the rotating position : "))
tsum=0
for i in range(n):
    l.append(int(input("Enter element : ")))

for j in range(0,n+1):
    tsum=rotation(l,j,n)

    if(tsum>maxi):
        maxi=tsum
print(maxi)




