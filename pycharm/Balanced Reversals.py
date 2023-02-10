for _ in range(int(input())):
    n=int(input())
    s=input()
    # st=s
    z=""
    o=""
    l=len(s)
    for i in range(l):
        if(s[i]=="0"):
            z=z+"0"
        else:
            o=o+"1"

    print(z+o)