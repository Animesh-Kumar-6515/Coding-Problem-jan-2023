t=int(input())
for i in range(t):
    n,a,b = list(map(int, input().split()))
    s=input()
    l=len(s)
    sum=0
    for j in range(l):
        if (s[j]=="0"):
            sum=sum+a
        else:
            sum=sum+b
    print(sum)