for _ in range(int(input())):
    o,t=map(int,input().split())
    if(o==0):
        print(1)
    else:
        print((t*2)+o+1)
