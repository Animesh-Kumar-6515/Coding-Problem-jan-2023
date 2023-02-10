for _ in range(int(input())):
    s,a,b,c=map(int,input().split())
    af=s
    af+=af*c/100
    # print(af)
    # print(s+((c/100)*s))

    if(af>a and af<b):
        print("YES")
    else:
        print("NO")
    # else:
    #     if ((s+((c/100)*s)) < a and (s+((c/100)*s)) > b):
    #         print("YES")
    #     else:
    #         print("NO")