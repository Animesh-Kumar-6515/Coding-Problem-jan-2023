T = int(input())
for i in range(T):
    n = int(input())

    sum = 0

    while (n != 0):
        sum = sum + (n % 10)
        n = n // 10
    print(sum)