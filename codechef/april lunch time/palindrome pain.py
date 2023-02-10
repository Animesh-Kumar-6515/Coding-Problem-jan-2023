for _ in range(int(input())):
    x,y=map(int,input().split())
    sum=x+y
    a=""
    b=""
    if(x%2==1 and y%2==1):
        print(-1)
    else:
        if(x==1 or y==1):
            print(-1)
        else:
            if(x%2==1):
                for i in range(x//2):
                    a=a+"a"
                for i in range(y//2):
                    b=b+"b"
                st1=a+b+"a"+b+a
                st2=b+a+"a"+a+b
                print(st1)
                print(st2)
            elif(y%2==1):
                for i in range(x//2):
                    a=a+"a"
                for i in range(y//2):
                    b=b+"b"
                st1=a+b+"b"+b+a
                st2=b+a+"b"+a+b
                print(st1)
                print(st2)
            else:
                for i in range(x//2):
                    a=a+"a"
                for i in range(y//2):
                    b=b+"b"
                st1=a+b+b+a
                st2=b+a+a+b
                print(st1)
                print(st2)
