for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    max=0
    for i in arr:
        freq=arr.count(i)
        if(freq>=max):
            max=freq
            res=i
    if(max>len(arr)//2):
        print(res)
    else:
        print("NOTA")