for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))[:n]
    count=0
    flag=0
    for i in range(n):
        if (arr[i] % 3 != 0):
            for j in range(n):
                if((arr[i]+1) %3==0 and (arr[j]-1)%3==0):
                    count=count+1
                    arr[i]=arr[i]+1
                    arr[j]=arr[j]-1
                elif((arr[i]-1) %3==0 and (arr[j]+1)%3==0):
                    count = count + 1
                    arr[i] = arr[i] - 1
                    arr[j] = arr[j] + 1
                else:
                    pass
    print(arr)
    for i in range(n):
        if(arr[i]%3==0):
            flag=flag+1
    if(flag==n):
        print(count)
    else:
        print(-1)
