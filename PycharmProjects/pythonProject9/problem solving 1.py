s=0
a=input().strip().split(" ")
for i in range(0,len(a)):
    a[i]=int(a[i])
    s=s+a[i]
print(s)