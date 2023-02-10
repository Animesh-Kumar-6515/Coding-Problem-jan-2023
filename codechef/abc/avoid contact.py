for _ in range(int(input())):
    x,y=map(int,input().split())
    if(x==y):
        print((x*2)-1)
    else:
        print(((y*2)+(x-y)))

