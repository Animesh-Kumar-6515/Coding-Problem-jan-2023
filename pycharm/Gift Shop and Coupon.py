for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()
    sum=0
    f=0
    for i in range(len(a)):
        sum=sum+a[i]
        f=f+1
        if(sum>=k):
            if((sum-a[i]+((a[i]//2) +(a[i]%2)))<=k):
                sum=sum-a[i]+((a[i]//2) +(a[i]%2))
            else:
                print(f-1)
            break
    if(sum<=k):
        print(f)
        # else:
        #     print(f)
            # break
    # dis=a[f]/2
    # if(k==0):
    #     print(0)
    #
    # elif((sum+dis)<=k):
    #     print(f+2)
    # else:
    #     print(f+1)