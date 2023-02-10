for _ in range(int(input())):
    x,n,b=map(int,input().split())
    arr=list(map(int,input().split()))[:n]
    arr.sort(reverse=True)
    # print(arr)
    if((sum(arr)+b)<=x):
        print(n)
    elif(x<=b):
        print(0)
    else:
        for i in arr:
            arr.remove(i)
            if((sum(arr)+b)<=x):
                print(len(arr))
                break
