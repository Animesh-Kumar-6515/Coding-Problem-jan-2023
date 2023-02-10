for _ in range(int(input())):
    n,k=map(int,input().split())
    num=n
    arr=[]
    mul=1
    while (num!=0):
        arr.append(num%10)
        num=num//10
    for i in range(k):
        arr.sort()
        if(arr[0]==9):
            pass
        else:
            new = arr[0]+1
            arr.pop(0)
            arr.append(new)
    for i in range(len(arr)):
        mul=mul*arr[i]
    print(mul)
