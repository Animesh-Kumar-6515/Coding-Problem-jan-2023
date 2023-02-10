for _ in range(int(input())):
    n=int(input())
    for i in range(10**123456):
        temp=9*i
        st=str(temp)
        sn=str(n)
        if(temp>n and st.count(sn)>0):
            print(temp)
            break
