i=int(input())
flag=0
for j in range(2, int(i / 2) + 1):
    if (i % i == 0):
        flag = flag + 1
if(flag<=0):
    print("Prime")
else:
    print("Not prime")
