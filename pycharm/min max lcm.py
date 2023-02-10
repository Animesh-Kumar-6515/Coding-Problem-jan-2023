t=int(input())
for i in range(t):
    x,k=map(int,input().split())
    m=x*k
    lcm=(m*(m-1))
    print(x*2," ",lcm)