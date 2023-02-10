t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    diff=n-k
    if(k==1 or k==2):
        mp=diff*2
    else:
        mp=2*(diff+(k-1)//2)
    print(mp)