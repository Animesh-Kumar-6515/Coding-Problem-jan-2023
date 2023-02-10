t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int,input().split()))
    even = 0
    odd = 0
    for j in range(n):
        if p[j]%2:
            odd+=1
        else:
            even+=1
    x = 0
    y =0
    if odd%2==1:
        x = even
    else:
        x = odd/2
    y = even
    if x<=y:
        ans = x
    else:
        ans = y
    print(int(ans))