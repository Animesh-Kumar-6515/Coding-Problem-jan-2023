for _ in range(int(input())):
    n,w=map(int,input().split())
    arr=list(map(int,input().split()))
    arr.sort(reverse=True)
    sum=0
    i=1
    while sum<w:
        sum=sum+arr[i-1]
        i=i+1
    print(n-i+1)
