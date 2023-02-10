for _ in range(int(input())):
    a,b,p,q=map(int,input().split())
    # flag1=0
    # flag2=0
    # for i in range(1,p+1):
    #     if((a*i)==p):
    #         flag1=flag1+1
    #     elif((b*(i+1))==q):
    #         flag2=flag2+1
    # if(flag1 >0 and flag2>0):
    #     print("YES")
    # else:
    #     print("NO")
    if(p%a==0 and q%b==0):
        if((p//a)==(q//b) or ((p//a)+1)==(q//b) or (p//a)==((q//b)+1)):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
