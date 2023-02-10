for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))[:n]
    sum=0
    min=0
    per=0
    c=0
    flag=0
    for i in range(n):
        if(arr[i]%3==0):
            flag=flag+1
    if(flag==n):
        print(0)
    else:
        for i in range(n):
            if(arr[i]%3==0):
                per=per+1
            elif(arr[i]%3==1):
                min=min+1
            else:
                sum=sum+1
        if(sum==min):
            print(sum)
        elif(sum>min):
            c=sum-min
            if(c%3==0 and per!=0):
                print(min+c)
            else:
                print(-1)
        else:
            c=min-sum
            if(c%3==0 and per!=0):
                print(c+sum)
            else:
                print(-1)