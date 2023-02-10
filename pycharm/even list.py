n=int(input("Enter the number of elements in the list : "))
lst=list(map(int,input().split()))[:n]
even=[]
odd=[]
for i in lst:
    if(i%2==0):
        even.append(i)
    else:
        odd.append(i)
print("Even list is :",even)
print("Odd list is :",odd)