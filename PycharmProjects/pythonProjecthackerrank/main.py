sum = 0
lst = []
n = int(input())
for i in range(0, n ):
    ele = int(input())
    lst.append(ele)
print (lst)
for j in range(0, n ):
    sum = sum + lst[j]
print(sum)
