t = int(input())

for i in range(t):
    flag = 0
    length, array = int(input()), list(map(int, input().split()))
    if length % 2 == 0 or array[0] != 1 or array[0] != array[-1]:
        print("no")
    else:
        for j in range(length % 2):
            if array[j] != array[-(j+1)]:
                flag += 1
        if flag == 1:
            print("no")
        else:
            print("yes")