import math
n=int(input())
arr=list(map(int,input().split()))

# res = sorted(arr, key = lambda ele: [int(j) for j in str(ele)])
temp1 = map(str, arr)

max_len = max(map(len, temp1))

res = sorted(arr, key=lambda idx: (str(idx).ljust(max_len, 'a')))
print(*res,sep=" ")
