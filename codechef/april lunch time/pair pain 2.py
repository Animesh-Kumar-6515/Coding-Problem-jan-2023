for _ in range(int(input())):
    n=int(input())
    ar=list(map(int,input().split()))
    x=0
    for i in range(n-1):
        for j in range(i+1,n):
            if((ar[i]+ar[j])>=ar[i]*ar[j]):
                c=c+1
    print(c)
