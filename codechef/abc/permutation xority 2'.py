for _ in range(int(input())):
    n=int(input())
    arr=[]
    if(n>2 and n%2==1):
        for i in range(n,1,-1):

            print(i,end=" ")

        print(1)
    elif(n>2 and n%2==0):
        x=1
        for i in range(0,n,1):
            arr.append(x)
            x=x+1
        #     arr.append(i)
        # arr.append(3)
        # arr.append(2)
        # print(3,1)
        arr[0]=2
        arr[1]=3
        arr[2]=1
        for ele in arr:
            print(ele,end=" ")
    else:
        print(-1)