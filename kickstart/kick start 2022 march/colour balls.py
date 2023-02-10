for _ in range(int(input())):
    r,g,b,w=map(int,input().split())
    od=0
    if(r%2==1):
        od=od+1
    if (g % 2 == 1):
        od = od + 1
    if (b % 2 == 1):
        od = od + 1
    if (w % 2 == 1):
        od = od + 1
    if(od==0):
        print("YES")
    elif(r==0 and g==0 and b==0 and w==0):
        print("YES")
    elif(od==1):
        print("YES")
    elif(od==2 and w%2==1):
        print("YES")
    elif(od==2 and w%2==0):
        print("NO")
    elif(od==3 and w%2==0):
        print("NO")
    elif(od==3 and w%2==1):
        print("YES")
    elif(od==4):
        print("YES")
    else:
        print("NO")
