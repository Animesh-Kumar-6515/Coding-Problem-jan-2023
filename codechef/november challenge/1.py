for _ in range(int(input())):
    x, y = map(int, input().split())
    if(x%2==0):

        if(x==0 and y%2==0):
            print("Yes")
        elif(x==0 and y%2!=0):
            print("NO")
        else:
            print("YEs")
    else:
        print("NO")
