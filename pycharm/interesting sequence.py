for _ in range(int(input())):
    k=int(input())
    flag=0
    if(k%2==0):
        flag=1
        for i in range(1,(k//4)+1):
            if(k%i==0):
                flag=flag+1
    else:
        flag=0
        for i in range(1,(k//3)+1):
            if(k%i==0):
                flag=flag+1
    # for i in range(1,(k//4)+1):
    #     if(k%i==0):
    #         flag=flag+1
    print(flag)