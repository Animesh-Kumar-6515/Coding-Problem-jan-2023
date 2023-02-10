for _ in range(int(input())):
    n=int(input())
    arr = list(map(int, input().strip().split()))[:n]
    for i in range(len(arr)+1):
        lst=[]
        for j in range(i):
            lst.append(arr[j:i])
print(lst)