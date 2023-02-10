for _ in range(int(input())):
    i=input()
    p=input()

    correct=""
    start=0
    for j in range(len(i)):
        for k in range(start,len(p)):
            if(i[j]==i[k]):
                correct=correct+i[j]
