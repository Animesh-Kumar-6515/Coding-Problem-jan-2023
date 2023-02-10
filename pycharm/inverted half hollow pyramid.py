
for i in range(5,0,-1):
    for j in range(1,i+1):
        if(i==5):
            print("*",end="")

        else:
            if(j==1 or j==i):
                print("*",end="")
            else:
                print(" ",end="")
    print()