for _ in range(int(input())):
    n,x=map(int,input().split())
    correct=0
    wrong=0
    un=0
    sum=0
    if((n*3)==x):
        print("YES")
        print(n,0,0)
    elif((n*3)<x):
        print("NO")
    # elif(((n-2)*3))
    elif((n==1 and x==0) or (n==2 and x==0) or (n==3 and x==0)):
        print(0,0,n)
    else:
        if(((n-2)*3)>x):
            correct=(x//3)+1
            sum=correct*3
            while(sum!=x):
                sum=sum-1
                wrong=wrong+1
            if((correct+wrong)==n):
                print("YES")
                print(correct,wrong,un)
            else:
                un=n-(correct+wrong)
                print("YES")
                print(correct,wrong,un)
        else:
            print("NO")
