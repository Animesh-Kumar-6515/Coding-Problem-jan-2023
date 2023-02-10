for _ in range(int(input())):
    n,x,k=map(int,input().split())
    a=list(map(int,input().split()))[:n]
    b = list(map(int, input().split()))[:n]
    flag=0
    for i in range(n):
        if(a[i]>b[i]):
            if((a[i]-b[i])<=k):
                flag=flag+1
        else:
            if ((b[i] - a[i]) <= k):
                flag = flag + 1
    if(flag>=x):
        print("YES")
    else:
        print("NO")