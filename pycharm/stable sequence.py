t=int(input())
for j in range(t):
    n=int(input())
    arr=list(map(int,input().split()))[:n]
    # arr2=[]
    # arr2.extend(arr)
    # arr.sort()
    # print(arr)
    # print(arr2)
    # x=0
    # y=0
    mini=min(arr)
    maxi=max(arr)
    # flag=1
    # for i in range(len(arr)-1):
    #     if(arr[i]==arr[i+1]):
    #         flag=flag+1
    if(mini==maxi):
        print(0)
    elif(arr[-1]==maxi):
        print(1)
    # elif(arr[n-1]==max(arr)):
    #     print(1)
    else:
        print(2)

