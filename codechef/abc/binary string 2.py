for _ in range(int(input())):
    n,x,y=map(int,input().split())
    s=input()
    if(s.count("1")>0 and s.count("0")>0):
        if(x>y):
            print(y)
        else:
            print(x)
    else:
        print(0)