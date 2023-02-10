# n = int(input().strip())
# ar = list(map(int, input().rstrip().split()))
n=9
ar=[10,20,10,20,10,30,10,50,20]
count=0

for i in range(n):
    for j in range(i+1,n):
        if(ar[i]==ar[j]):
            count=count+1
            ar.pop(ar[i])
            ar.pop(ar[j])
            n=n-2
            break
print(count)