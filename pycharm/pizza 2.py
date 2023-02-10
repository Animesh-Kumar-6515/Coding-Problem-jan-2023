for _ in range(int(input())):
    n,k=map(int,input().split())
    if(k<n):
        if(n%k==0):
            print(n//k)
        else:
            print(n*k)
    elif(k>n):
        if(k%n==0):
            print(1)
        else:
            print(n)
    else:
        print(1)