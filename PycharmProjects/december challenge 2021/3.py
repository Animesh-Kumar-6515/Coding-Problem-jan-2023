for _ in range(int(input())):
    n,m=map(int,input().split())
    s=0
    st=""
    if(n>m):
        s=n+m+2
        for i in range(s):
            if(i%2==0):
                st=st+"0"
            else:
                st=st+"1"
    elif (n < m):
        s = n + m+2
        for i in range(s):
            if (i % 2 == 0):
                st = st + "1"
            else:
                st = st + "0"
    else:
        s = n + m+2
        for i in range(s):
            if (i % 2 == 0):
                st = st + "0"
            else:
                st = st + "1"
    # st="0"+st+"0"
    # s=s+2
    print(len(st))
    print(st)