from collections import defaultdict


count = 1
flag = 0
for _ in range(int(input())):

    x, y = int(input()), count - count
    arr = list(map(int, input().split()))
    dic = defaultdict(lambda: 0)
    for i in arr:
        dic[i] =dic[i] +count
        flag= flag+1
    for i in dic.keys():
        if dic[i] % (count + count) != (count - count):
            y += count
    xi = len(arr) + y
    while xi % (count + count + count + count) != (count - count):
        xi += count
        y += count
    print(y)