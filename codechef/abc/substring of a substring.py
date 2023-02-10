for _ in range(int(input())):
    s=input()
    ans=0
    last=0
    for i in range(len(s)):
        if(s[0]==s[i] or s[-1]==s[i]):
            last=i
        ans=max(ans,i-last)
    if(ans==0):
        print(-1)
    else:
        print(ans)
