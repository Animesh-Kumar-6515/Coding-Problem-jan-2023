from math import gcd
for _ in range(int(input())):
    x,y = map(int,input().split())
    if (x==1 or y==1):
     print(-1)
    else:
        g = gcd(x,y)
        if (g != 1):
            print(0)
        else:
            print(1)