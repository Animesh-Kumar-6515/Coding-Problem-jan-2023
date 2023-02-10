for _ in range(int(input())):
    n=int(input())
    x=1
    c=0
    while (n>=x):
        n=n-x
        x=x+1
        c=c+1
    print(c)

