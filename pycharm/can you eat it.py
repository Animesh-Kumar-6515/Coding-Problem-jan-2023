for _ in range(int(input())):
    n,k=map(int,input().split())
    if(n==0):
        print(0)
    elif(n%k==0):
        print(n//k)
    else:
        print(-1)
