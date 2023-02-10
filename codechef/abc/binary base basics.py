for _ in range(int(input())):
    n,k=map(int,input().split())
    s=input()
    flag=0
    for i in range(n//2):
        if(s[i]!=s[(n-1)-i]):
            flag=flag+1
    if(flag<=k):
        print("YES")
    else:
        print("NO")
