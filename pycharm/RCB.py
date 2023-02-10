t=int(input())
for i in range(t):
    x,y,z=map(int,input().split())
    if(((z*2)+x)>=y):
        print("YES")
    else:
        print("NO")