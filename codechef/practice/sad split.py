for _ in range(int(input())):
    n=int(input())
    st=str(n)
    n2=n
    e=0
    o=0
    z=0
    while (n2 != 0):
        temp = n2 % 10
        n2 = n2 // 10
        if(temp==0):
            z=z+1
        elif (temp % 2 == 0):
            e = e + 1
        else:
            o = o + 1
    sum=o+e
    # if(n>0 and n<=10):
    #     print("NO")
    if(sum==1 and o==1):
        print("NO")
    elif(o==1 and e==1):
        print("NO")
    elif(n>10 and n<100):
        if(o==1 and e==1):
            print("NO")
        else:
            print("YES")
    else:
        print("YES")

    # if(n>=10):
    #     # for i in range(len(st)):
    #     #     for j in range(len(st)):
    #     #         if()
    #
    #     if(o==1 and e==1):
    #         print("NO")
    #     # elif(o==1):
    #     #     print("NO")
    #     else:
    #         print("YES")
    #
    # else:
    #     print("NO")
