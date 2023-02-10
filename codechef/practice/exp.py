for _ in range(int(input())):
    n=int(input())
    # st=str(n)
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
    # print("odd= ",o," even = ",e," zero = ",z," sum = ",sum)
    if(sum==1):
        if(e==1 and z>=2):
            print("YES")
        elif(o==1 and z>=2):
            print("YES")
        else:
            print("NO")
    elif(sum>=2):
        if(e==1 and o==1 and z==0):
            print("NO")
        elif(e>=2 and o==0 and z>=0):
            print("YES")
        elif(e==0 and o>=2 and z>=0):
            print("YES")
        elif(e>=1 and o>=1 and z>=0):
            print("YES")
        elif(e>=1 and o>=1 and z>=1):
            print("YES")
        else:
            print("NO")
        # if(o==1 and e==1 and z==0):
        #     print("NO")
        # # elif(o==1 and e==1 and z>=1):
        # #     print("YES")=
        # elif(o>1 and e<=1 and z==0):
        #     print("NO")
        # elif(o<=1 and e>1 and z==0):
        #     print("NO")
        # elif(o>=1 and e>=1 and z>=0):
        #     print("YES")
        # elif(o==0):
        #     print("YES")
        # elif(e==0):
        #     print("YES")
        # else:
        #     print("NO")
    else:
        print("NO")


