for _ in range(int(input())):
    n=int(input())
    # a=list(map(int,input().split()))[:n]
    a=[1]
    # j=2
    for i in range(2,n+1):

        if(i%2==0):
            ele=a[i-2]*2
            a.append(ele)
        else:
            ele = (a[i - 2] * 2)-1
            a.append(ele)
        # j=j+1
    for i in a:
        print(i,end=" ")
    print()