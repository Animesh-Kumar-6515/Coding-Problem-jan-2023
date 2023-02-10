for _ in range(int(input())):
    n,r,b=map(int,input().split())
    m=r%(b+1)
    k=r//(b+1)
    st=""
    R = ""
    x = r // (b + 1)
    if(m==0):


        for i in range(x):
            R=R+"R"
        for i in range(b):
            st=st+R+"B"
        st=st+R
    elif(m==1):
        for i in range(x):
            R=R+"R"
        for i in range(b):
            st=st+R+"B"
        l=r-(x*b)
        flag=""
        for i in range(l):
            flag=flag+"R"
        st=st+flag
    else:
        for i in range(x+1):
            R=R+"R"
        for i in range(b):
            st=st+R+"B"
        # x=r-(x*b)
        l=r-((x+1)*b)
        flag=""
        for i in range(l):
            flag=flag+"R"
        st=st+flag
    print(st)