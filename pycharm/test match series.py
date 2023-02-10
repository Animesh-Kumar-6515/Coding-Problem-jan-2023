t=int(input())
for i in range(t):

    r1=list(map(int,input().split()))
    ind=0
    eng=0
    draw=0
    for j in range(0,5):
        if(r1[j]==0):
            draw=draw+1
        elif(r1[j]==1):
            ind=ind+1
        elif(r1[j]==2):
            eng=eng+1
        else:
            pass
    if(ind>eng):
        print("INDIA")
    elif(ind<eng):
        print("ENGLAND")
    else:
        print("DRAW")
