for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))[:n]
    sub=0
    seta=set(arr)
    if(n>=12):
        if(len(seta)<=12):
            sub=n-len(seta)
            if((n-12)<=sub):
                print("YES")
            else:
                print("NO")
        else:
            print("NO")
    else:
        print("NO")

