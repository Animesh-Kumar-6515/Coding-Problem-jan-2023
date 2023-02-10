for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()
    arr=[]
    sum=0
    sum2=0
    # for i in range(len(a)):
    #     sum=sum+a[i]
    #     if(sum>=k):
    #         break
    # i=0
    for i in range(len(a)):
        sum=sum+a[i]
        arr.append(a[i])
        if(sum>=k):
            break


    # if(sum>=k):
    for j in range(len(arr)):
        sum2=sum2+arr[j]

    sum2=sum2-a[-1]+(a[-1]/2)
    if(sum2<=k):
        print(j+1)
    else:
        print(j)
    # else:

