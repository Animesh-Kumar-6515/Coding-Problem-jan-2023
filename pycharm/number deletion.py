# x,y,z,n = [int(input()) for i in range(4)]
# print([[i,j,k] for i in range(x+1) for j in range(y+1) for k in range(z+1) if ((i+j+k) != n)])
x,y,z,n = [int(input()) for i in range(4)]
for i in range(x+1):
    for j in range(y+1):
        for k in range(z+1):
            print([[i,j,k] , end ","])
