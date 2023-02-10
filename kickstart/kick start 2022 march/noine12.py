for _ in range(int(input())):
    n=int(input())
    num=str(n)
    arr=[]
    if(n==1):
        print(18)
    elif(n==2):
        print(27)
    elif (n == 3):
        print(36)
    elif (n == 4):
        print(45)
    elif (n == 5):
        print(45)
    elif (n == 6):
        print(63)
    elif (n == 7):
        print(72)
    elif (n == 8):
        print(81)
    elif (n == 9):
        print(90)
    else:
        for i in range(len(num),0,-1):
            k=i+1
            # min=0
            for j in range(0,9):
                m=str(j)
                num=str(n)
                num=num[:k]+m+num[k:]
                num=int(num)
                if(num%9==0):

                    arr.append(num)
                    # print(num)
        print(min(arr))
