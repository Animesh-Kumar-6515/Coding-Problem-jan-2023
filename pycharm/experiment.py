lst=[2,2,3,1,4]
olst=lst[:]
lst.sort()
dicr={}
n=[]
k=0
for i in olst:
    for j in lst:
        if(j==i):
            n.append(k)
            k=k+1
print(n)