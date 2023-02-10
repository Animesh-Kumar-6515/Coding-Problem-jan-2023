for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    holi=8
    for i in range(n):
        if(arr[i]==6 or arr[i]==7 or arr[i]==13 or arr[i]==14 or arr[i]==20 or arr[i]==21 or arr[i]==27 or arr[i]==28):
            pass
        else:
            holi=holi+1
    print(holi)