for _ in range(int(input())):
    h,v=map(int,input().split())
    if(h>v):
        st="0"
        for i in range(h):
            st=st+"10"
    elif(h<v):
        st="1"
        for i in range(v):
            st=st+"01"
    else:
        st="01"
        for i in range(h):
            st=st+"01"
    print(st)
