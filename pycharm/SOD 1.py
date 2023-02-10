T=int(input())
for i in range(T):
    l,r=map(int,input().split())
    count=0
    for j in range(l,r+1):
        sum=0
        while(j!=0):
            sum=sum+(j%10)
            j=j//10
        if(sum%3==0):
            count=count+1
    print(count)
