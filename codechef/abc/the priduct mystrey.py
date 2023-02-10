import math
for _ in range(int(input())):
    b,c=map(int,input().split())
    g=math.gcd(b,c)
    a=c//g
    print(a)
