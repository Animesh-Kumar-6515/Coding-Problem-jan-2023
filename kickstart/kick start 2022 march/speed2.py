for _ in range(int(input())):
    i=input()
    p=input()
    correct=""
    le=len(p)
    start=0
    if(len(p)<len(i)):
        print("IMPOSSIBLE")
    else:
        for j in range(len(i)):
            for k in range(start,len(p)):
                if(i[j]==p[k]):
                    correct=correct+p[k]
                    start=k+1
                    break
        if(correct==i):
            print(le-len(i))
        else:
            print("IMPOSSIBLE")