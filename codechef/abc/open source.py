for _ in range(int(input())):
    n=int(input())
    st=str(n)
    if(n>=0 and n<=9):
        print(-1)
    elif(n>9):
        # a=int(st[0:1])
        # b=int(st[1:2])
        flag=1
        for i in range(len(st)-1):
            if(int(st[i+1:i+2])>int(st[i:i+1])):
                print(int(st.replace(st[i:i+1],st[i+1:i+2])))
                flag=flag+1
                break
        if(flag==len(st)):
            print(-1)

