for _ in range(int(input())):
    sum, sub, mul, div = map(int, input().split())
    a = sub + (sum - sub) / 2
    b = (sum - sub) / 2
    l=[]
    l=l.append(sum)
    l=l.append(sub)
    l = l.append(mul)
    l = l.append(div)
    l.sort()


    flag=0
    i=0
    # while(flag !=0):
    #     if()
    for i in range(-l[0],l[0]):
        for j in range(-l[0],l[0]):
            if(i-j==sub):
                print(i,j)
            elif(j-i==sub):
                print(j,i)
            elif(i+)

