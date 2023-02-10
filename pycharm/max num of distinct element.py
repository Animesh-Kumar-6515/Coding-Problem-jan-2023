t=int(input())
for i in range(t):
    n=int(input())
    lst = [int(j) for j in input().split()][:n]
    nlst=lst.sort()
    k=0
    flag=-1
    for j in range(n):
        k=j % nlst[j]
        if(k!=flag):
            flag=k
