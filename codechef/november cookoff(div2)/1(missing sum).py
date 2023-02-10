for _ in range(int(input())):
    n=int(input())
    # arr=list(map(int,input().split()))[:n]
    # print(arr)

    a=1
    sum=1
    arr=[]
    for i in range(n):
        arr.append(sum)
        # print(sum,end=" ")

        sum=sum+a+1

    print(*arr,sep=" ")
