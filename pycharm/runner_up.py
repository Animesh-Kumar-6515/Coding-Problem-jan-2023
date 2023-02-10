n=int(input())
arr=[]
arr = list(map(int,input().strip().split()))[:n]
print (*arr,sep=" ")
arr.sort()
for j in range(n-2,-1,-1):
    if (arr[j]<arr[n-1]):
        print(arr[j])
        break
