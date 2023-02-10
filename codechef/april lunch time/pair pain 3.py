for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    if 1 in a:
        ans = 0
        for i in range(n):
            if a[i] == 1:
                ans += n - i - 1
    if 2 in a:
        x = a.count(2)
        ans += x * (x - 1) // 2
    print(ans)