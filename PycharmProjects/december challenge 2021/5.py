for _ in range(int(input())):
    n=int(input())
    s=input()
    fir=0
    sec=1
    st=""
    for i in range(n-1):
        if((s[fir]=="S" and s[sec]=="R")or(s[fir]=="R" and s[sec]=="P")or(s[fir] == "P" and s[sec] == "S")):

            fir=sec
            sec=sec+1
        elif((s[fir]=="S" and s[sec]=="P")or(s[fir]=="P" and s[sec]=="R")or(s[fir] == "R" and s[sec] == "S")):

            sec=sec+1

        else:
            sec=sec+1

    for i in range(n):
        if ((s[fir] == "S" and s[i] == "R")or(s[fir] == "R" and s[i] == "S")):

            st=st+"R"
        elif ((s[fir] == "S" and s[i] == "P")or(s[fir] == "P" and s[i] == "S")):
            st=st+"S"
        elif ((s[fir] == "P" and s[i] == "R")or(s[fir] == "R" and s[i] == "P")):

            st=st+"P"

        elif(s[fir]=="S" and s[i]=="S"):
            st=st+"S"
        elif (s[fir] == "R" and s[i] == "R"):

            st = st + "R"
        else:

            st = st + "P"
    print(st)