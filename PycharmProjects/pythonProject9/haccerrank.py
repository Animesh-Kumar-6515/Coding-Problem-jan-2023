lar=0
min=0
l=0

lst = []
n = input()
x=int(n)
for i in range(0,x):
    ele = int(input())

    lst.append(ele)
lst.sort()
l=len(lst)
for j in range(l):
    lar=lar+lst[j]
for k in range(1,l+1):
    min=min+lst[k]
print(min,"  ",lar)