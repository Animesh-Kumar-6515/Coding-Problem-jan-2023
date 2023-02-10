
# WAP to form the pattern
for i in range(0,5):
    for k in range(0,i):
        print("-",end="")
    for j in range(5,i,-1):
        print("*",end="")
    print()
for l in range(0,5):
    for m in range(4,l,-1):
        print("-",end="")
    for n in range(0,l+1):
        print("*",end="")
    print()
