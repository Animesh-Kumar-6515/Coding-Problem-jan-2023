for _ in range(int(input())):
    n=int(input())
    a=input()[:n]
    sum=1
    temp=a[0]
    for i in range(n):
        if(temp!=a[i]):
            temp=a[i]
            sum=sum+1
    if(sum%2==0):
        print("RAMADHIR")
    else:
        print("SAHID")