
z=1
lol=int(input("enter any number"))
x=(lol*2)-1
for i in range(1,lol+1):
    for j in range(i,lol+1):
        print("-",end="")
    for k in range(1,z+1):
        print("*",end="")
    print()
    z=z+2
for l in range(1,lol):
    for m in range(-1,l):
        print("-",end="")
    for n in range(x-1,0,-1):
        print("*",end="")


    x=x-2
    print()
