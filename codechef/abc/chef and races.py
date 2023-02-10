for _ in range(int(input())):
    x,y,a,b=map(int,input().split())
    flag=0
    if(x==a or x==b):
        flag=flag+1
    if(y==a or y==b):
        flag=flag+1
    print(2-flag)