l=[1,2,54,4,4,2,3,0]
l.sort(reverse=True)
print(l)
max=l[0]
sm=0
for i in range(len(l)-1):
    if(max == l[i]):
        continue
    else:
       sm=l[i]
       break
print(sm)