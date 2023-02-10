for i in range(int(input())):
    n=int(input())
    st=str(n)
    # flag=0
    for j in range(len(st)):
        if(st[j]=="6"):
            st=(st[:j]+"9"+st[j+1:])
            break
    #     if(st[j]=="9"):
    #     #         flag=flag+1
    #     # if(flag==len(st)):
    #     #     print(int(st))
    #     # else:
    #     #     print(int(st))
    print(int(st))