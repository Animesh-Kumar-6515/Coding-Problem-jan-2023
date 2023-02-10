T=int(input())
for i in range(T):
        D,L,R=map(int,input().split())
        if(D<L):
                print("Too Early")
        elif(D>=L and D<=R):
                print("Take second dose now")
        else:
                print("Too Late")