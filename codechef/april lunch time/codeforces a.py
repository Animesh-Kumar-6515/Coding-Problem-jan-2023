for _ in range(int(input())):
    n,r,b=map(int,input().split())
    x=r//b
    R=""
    st=""
    for i in range(x):
        R=R+"R"
    for i in range(b):
        st=st+R+"B"
    to=r-(b*x)
    for i in range(to):
        st=st+"R"
    print(st)
