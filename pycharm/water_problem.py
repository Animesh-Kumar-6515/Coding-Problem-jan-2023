for _ in range(int(input())):
    H, x, y, C = map(int, input().split(' '))
    if (H * (x + int(y/2))) <= C:
        print("YES")
    else:
        print("NO")