for _ in range(int(input())):
    R = int(input("Enter the number of rows:"))
    C = int(input("Enter the number of columns:"))
    matrix = []
    print("Enter the entries row wise:")

    # For user input
    for i in range(R):  # A for loop for row entries
        a = []
        for j in range(C):  # A for loop for column entries
            a.append(int(input()))
        matrix.append(a)
    def spiral(ar,r,c):
        sr=0
        sc=0
        while(sr<r and sc<c):
            for i in range(sc,c):
                print(ar[sr][i],end=" ")
            sr=sr+1

            for i in range(sr,r):
                print(ar[i][c-1],end=" ")
            c=c-1

            for i in range(c-1,(sc-1),-1):
                print(ar[r-1][i],end=" ")
            r=r-1

            for i in range(c-1,sr-1,-1):
                print(ar[i][sc],end=" ")
            sc=sc-1
    print(spiral(matrix,R,C))



