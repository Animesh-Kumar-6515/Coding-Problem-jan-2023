for _ in range(int(input())):
    n,x,y=map(int,input().split())
    s=input()
    a=[]
    new=""
    for i in range(len(s)):
        a.append(int(s[i]))
    # a.sort()
    if (x<y):
        a.sort()
        for i in range(len(a)):
            new=new+str(a[i])
    else:
        a.sort(reverse=True)
        for i in range(len(a)):
            new=new+str(a[i])
    print(new)



