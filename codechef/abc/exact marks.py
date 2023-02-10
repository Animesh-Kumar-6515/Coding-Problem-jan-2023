for _ in range(int(input())):
    n,x=map(int,input().split())
    correct=0
    wrong=0
    un=0
    sum=0
    if((n*3)<x):
        print("NO")
    elif(n==1 and x==0):
        print("YES")
        print(0,0,1)
    else:
        if((n*3)==x):
            print("YES")
            print(n,0,0)
        else:
            if((((n-2)*3))>x):
                print("YES")
                while(sum<=x):
                    correct=correct+1
                    sum=sum+3
                while(sum!=x):
                    sum=sum-1
                    wrong=wrong+1
                un=(n-correct)-wrong
                print(correct,wrong,un)
            else:
                print("NO")
