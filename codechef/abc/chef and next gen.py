for _ in range(int(input())):
    a,b,x,y=map(int,input().split())
    if(a*b <= x*y):
        print("YES")
    else:
        print("NO")
