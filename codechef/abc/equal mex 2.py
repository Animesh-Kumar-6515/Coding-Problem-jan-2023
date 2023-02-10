for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))[:n]
    max=0
    flag=0
    for i in range(len(a)):
        for j in range(len(a)):
            if(a[i]==a[j]):
                flag=flag+1
        if(flag>=max):
            max=flag
        flag=0
    print(max)