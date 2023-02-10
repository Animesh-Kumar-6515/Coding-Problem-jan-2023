n=int(input("Enter the number of elements in the list : "))
lst=list(map(int,input().split()))[:n]
pos=0
neg=0
neu=0
for i in lst:
    if(i<0):
        neg+=1
    elif(i>0):
        pos+=1
    else:
        neu+=1
print("The number of positive number in list is : ",pos)
print("The number of negative number in list is : ",neg)
print("THe number of zero present in the list is : ",neu)
