for _ in range(int(input())):
    n=int(input())
    if(n==1 or n==2):
        print(1)
    elif(n>2 and n%2==1):
        print(((n-2)//2)+2)
    else:
        print(((n-2)//2)+1)