for _ in range(int(input())):
    a,b,c=input().split()
    x,y=input().split()
    if(a==x or a==y):
        print(a)
    elif(b==x or b==y):
        print(b)
    else:
        print(c)
