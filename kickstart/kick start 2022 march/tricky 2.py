for _ in range(int(input())):
    n=int(input())
    flag=0
    for i in range(n):
        if(n>=i):
            n=n-i
            flag=flag+1
    if(n==0):
        print(0)
    elif(n==1):
        print(1)
    else:

        print(flag-1)


