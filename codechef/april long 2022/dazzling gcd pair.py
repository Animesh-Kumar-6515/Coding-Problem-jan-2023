# def gcd(i,j)


for _ in range(int(input())):
    a,b=map(int,input().split())
    x1=a+1
    x2=a+2
    x3=a+3
    x4=a*2
    if(a==1 and x3<=b):
        print(x1,x3)
    elif(a%2==0 and a>1):
        if(x2<=b):
            print(a,x2)
        else:
            print(-1)
    elif(a%2==1 and a>1):
        if(((a+x4)<=(x1+x3)) and (a*2)<=b):
            print(a,x4)
        elif(((x1+x3)<=(a+x4)) and x3<=b):
            print(x1,x3)
        else:
            print(-1)
    else:
        print(-1)


