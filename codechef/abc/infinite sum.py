for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))[:n]
    q=int(input())

    for i in range(q):
        sum=0
        l,r=map(int,input().split())
        print()
        for j in range(l-1,r):
            sum=sum+arr[j%n]
        print(sum,end=" ")