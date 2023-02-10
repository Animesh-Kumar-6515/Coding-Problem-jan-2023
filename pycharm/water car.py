for _ in range(int(input())):
    n,v=map(int,input().split())
    if(v==1):
        print(n,n)
    else:
        max=0
        min=v
        for i in range(1,n):
            max=max+i
        for i in range(2,n-v+1):
            min=min+i
        print(max,min)
