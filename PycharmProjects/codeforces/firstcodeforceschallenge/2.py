import math
for _ in range(int(input())):
    n=int(input())
    m=math.ceil(math.sqrt(n))
    arr=[]
    flag=0
    print(m)

    for i in range(1,m+1):
        if(math.pow(i,2)<=n and arr.count(math.pow(i,2))==0):
            flag=flag+1
            arr.append(math.pow(i,2))
        if(math.pow(i,3)<=n and arr.count(math.pow(i,3))==0):
            flag = flag + 1
            arr.append(math.pow(i, 3))
        # if(math.pow(1,3)<=n):
        #     flag=flag+1
    print(flag)