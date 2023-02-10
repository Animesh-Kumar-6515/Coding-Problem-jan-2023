for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    even=0
    odd=0
    for i in range(len(a)):
        if(a[i]%2==0):
            even+=1
        else:
            odd+=1
    if(even>odd):
        if((odd % 2)==0):
            print(odd//2)
        elif((even % 2)==0):
            print(even)
        else:
            print(even)
    elif(odd>even):
        if((even % 2)==0):
            print(even)
        elif(((odd % 2)==0)and ((odd//2)<=even)):
            print(odd//2)
        else:
            print(even)
    else:
        if((odd%2)==0):
            print(odd//2)
        else:
            print(odd)