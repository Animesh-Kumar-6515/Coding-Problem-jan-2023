for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    l=[]
    s=[]
    for i in range(n):
        one=0
        if(a[i] in s):
            pass
        else:
            for j in range(n):
                if(a[i]==a[j]):
                    one=one+1
            l.append(one)
            s.append(a[i])

    o=0
    e=0
    for i in range(len(l)):
        if(l[i]==1):
            o=o+1
        else:
            e=e+1

    if(e>=2):
        print(0)
    else:
        if(o==0 and e==1):
            print(2)
        elif(o==1 and e==0):
            print(3)
        elif(o==1 and e==1):
            print(1)
        elif(o==2 and e==0):
            print(2)
        elif(o==2 and e==1):
            print(1)
        else:
            print(0)