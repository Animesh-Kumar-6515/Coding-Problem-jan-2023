t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    if(a>0 and b>0):
        print("Solution")
    if(a==0):
        print("Liquid")
    if(b==0):
        print("Solid")