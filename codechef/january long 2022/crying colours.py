for _ in range(int(input())):
    n=int(input())
    R=list(map(int,input().split()))
    G=list(map(int,input().split()))
    B=list(map(int,input().split()))
    if(R[0]==n and G[1]==n and B[2]==n):
        print(0)
    else:
        print(max((R[1]+R[2]+G[2]),(G[0]+B[0]+B[1])))