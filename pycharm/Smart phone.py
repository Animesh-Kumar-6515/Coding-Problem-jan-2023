x=int(input())
lst=[]
for i in range(x):
    n=int(input())
    lst.append(n)
print(lst)
sum=0
temp=0
max=0
for i in lst:
    for j in lst:
        if(i<=j):
            sum=sum+1
    temp=i*sum
    if(temp>=max):
        max=temp
    temp=0
    sum=0
print(max)