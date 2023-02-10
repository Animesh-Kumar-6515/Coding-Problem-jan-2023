n,m=map(int,input().split())
gcd=0
num = m
while(gcd==0):
    if(n%num==0 and m%num==0):
        gcd=num
    num=num-1
print(gcd)