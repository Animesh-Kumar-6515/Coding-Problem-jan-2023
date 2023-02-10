for _ in range(int(input())):
    a, b = map(int, input().split())
    if(a<b and (b-a)>=2):
        max=0
        for i in range(b):
            if((a | i)>=max and (a|i)<=b):
                max=a|i
        if(max==b):
            print(1)
        else:
            print((b-max)+1)
    elif(a==b):
        print(0)
    elif((b-a)==1):
        print(1)
    else:
        print(a-b)
