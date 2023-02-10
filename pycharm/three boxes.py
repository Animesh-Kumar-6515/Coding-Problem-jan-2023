t=int(input())
for i in range(t):
    a,b,c,d=map(int,input().split())
    if((a+b+c)<=d):
        print(1)
    else:
        if((a+b+c)%d==0):
            print((a + b + c) // d)
        else:
            print(((a + b + c) // d)+1)
