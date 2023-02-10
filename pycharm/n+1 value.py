for _ in range(int(input())):
    n=int(input())
    # if(n==0):
    #     pass
    if(n==1):
        print(1,1)
    # elif(n==2):
        # print()
    else:
        sum=n-1
        # print(1,1,end=" ")
        for i in range(1,n):
            print(i,end=" ")
            sum=sum+i
        print(n-1,end=" ")
        ts=2**n
        print(ts-sum)
