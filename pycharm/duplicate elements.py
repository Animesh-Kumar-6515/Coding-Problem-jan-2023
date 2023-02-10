n=int(input("Enter the number of elements in the list : "))
lst=list(map(int,input().split()))[:n]
new=[]
for i in lst:
    if(new.count(i)==0):
        new.append(i)
print("The new list is : ",new)