for _ in range(int(input())):
    A, B, C = map(int, input().split())
    X, Y, Z = map(int, input().split())
    res = 240
    for i in range(21):
        for j in range(21):
            for k in range(21):
                if (i * A + j * B + k * C <= 240):
                    res = max(res, i * X + j * Y + k * Z)
    print(res)

A, B, C = map(int, input().split())
X, Y, Z = map(int, input().split())
for i in range(3):
    
