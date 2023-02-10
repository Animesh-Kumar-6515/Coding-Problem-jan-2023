s=input()
temp=""
i=0
rtemp=""
if(s[8]=="A" or s[8]=="a"):
    if(s[0:2]=="12"):
        print("00"+s[2:8])
    else:
        print(s[0:8])
else:
    if(s[0:2]=="00"):
        print("00"+s[2:8])
    else:
        temp=temp+s[0:2]
        i=int(temp)
        i=i+12
        rtemp=str(i)
        print(rtemp+s[2:8])

