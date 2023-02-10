# cook your dish here
n = int(input())
x = []
y = []
y.append(1)
for i in range(n):
    xx = int(input())
    x.append(xx)

# print(x)
for i in range(1, n):
    if x[i] > x[i - 1]:
        y.append(y[i - 1] + 1)
    else:
        y.append(1)
        if y[i] == y[i - 1]:
            y[i - 1] = y[i - 1] + 1
print(y)
print(sum(y))
