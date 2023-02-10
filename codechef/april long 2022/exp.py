for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if((b*c)>=a):
        print("YES")
    else:
        print("NO")