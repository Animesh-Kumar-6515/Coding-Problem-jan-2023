t=int(input())
for i in range(t):
    n,m,k=map(int,input().split())
    flag=0
    flag2=0
    lst = [int(j) for j in input().split()][:n]
    for l in range(m):
        if(lst[l]==1):
            flag=flag+1
    for l in range(n):
        if(lst[l]==1):
            flag2=flag2+1
    if(flag2==n):
        print("100")
    elif(flag==m):
        print(k)
    else:
        print("0")


