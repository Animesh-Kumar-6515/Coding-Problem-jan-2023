for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    sum=0

    for i in range(n):
        sum=sum+arr[i]
    av=sum//2
    arr.append(av)
    arr.sort()
    sum1 = 0
    sum2 = 0
    for i in range(n):
        if(arr[i]==av):
            for j in range(i+1,n):
                sum2=sum2+arr[j]
            for j in range(0,i):
                sum1=sum1+arr[j]
            break
    if(sum1>sum2):
        print(sum1)
    else:
        print(sum2)

