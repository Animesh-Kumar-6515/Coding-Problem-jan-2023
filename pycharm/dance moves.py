t=int(input())
for i in range(t):
    x,y=map(int,input().split())
    temp=x
    temp1=x
    flag=0
    if(x<y):
        while(y>temp):
            temp=temp+2
            flag=flag+1
        if(temp==y):
            print(flag)
        else:
            flag=flag+1
            print(flag)
    if(temp1>y):
        while(temp1>y):
            temp1=temp1-1
            flag=flag+1
        print(flag)
    if(x==y):
        print(0)
