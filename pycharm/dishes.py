T=int(input())
for i in range(T):
    N,A,B,C=map(int,input().split())
    d1=0
    d2=0
    d1=A
    B=B-A
    # d2=(B-A)
    if(B>=C):
        d2=C
    else:
        d2=C-(C-B)
    if((d1+d2)>=N):
        print( "YES")
    else:
        print("NO")