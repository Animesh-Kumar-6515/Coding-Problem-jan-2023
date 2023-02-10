n=int(input())
arr=[]
for i in range(n):
    # a,x,y=input().split()
    # b=int(x)
    # c=int(y)
    lst=list(map(str,input().split()))
    if(len(lst)==3):
        a=lst[0]
        b=int(lst[1])
        c=int(lst[2])
    if(len(lst)==2):
        a=lst[0]
        b=int(lst[1])
    if(len(lst)==1):
        a=lst[0]
    if(a=="insert"):
        arr.insert(b,c)
    elif(a=="print"):
        print(arr)
    elif(a=="remove"):
        arr.remove(b)
    elif(a=="append"):
        arr.append(b)
    elif(a=="sort"):
        arr.sort()
    elif(a=="pop"):
        arr.pop()
    else:
        arr.reverse()
