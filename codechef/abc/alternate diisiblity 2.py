for _ in range(int(input())):
    n=int(input())
    a=[1]
    for i in range(1,n):
        if(i%2==1):
            a.append(a[i-1]*2)
        else:
            a.append((a[i-1]*2)-1)
    print(*a,sep=" ")
    # print()
