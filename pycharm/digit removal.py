t=int(input())
for i in range(t):
    n,d=map(int,input().split())
    x=0
    flag=0
    new=n
    ans=0
    while(new>0):
       x=new%10
       new=new//10
       flag=flag+1
       if(x==d):
           new=new*pow(10,flag)+(x+1)*pow(10,flag-1)
           ans=new-n
           flag=0
    print(ans)