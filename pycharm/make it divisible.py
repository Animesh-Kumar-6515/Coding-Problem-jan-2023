t = int(input())
while(t):
    n=int(input())
    if(n==1):
        print("3")
    elif (n==2):
        print("33")
    else:
        st = "0"*(n-2)
        print("3"+st+"3")
    t-=1