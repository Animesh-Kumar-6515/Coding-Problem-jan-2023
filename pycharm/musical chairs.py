t=int(input())
for _ in range(t):
    n=int(input())
    if(n==2):
        print(1)
    elif(n==3):
        print(2)
    else:
        if(n%2==0):
            flag=2
            for i in range(2,(n//4)+2):
                if (n % i == 1):
                    flag = flag + 1
        else:
            flag=3
            for i in range(2,(n//4)+1):
                if(n%i==1):
                    flag=flag+1
        print(flag)
