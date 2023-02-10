T=int(input())
for i in range(T):
        n=7
        zero=0
        one=0
        a = list(map(int,input().strip().split()))[:n]

        for ele in a:
                if(ele==0):
                        zero=zero+1
                if(ele==1):
                        one=one+1
        if (one>zero):
                print("YES")
        else:
                print("NO")