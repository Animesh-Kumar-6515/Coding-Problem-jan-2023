for _ in range(int(input())):
    n=int(input())
    s=input()
    # while(s.count("1")==0):
    #     if(s[0]=="1"):
    flaga=0
    z=s.count("0")
    o=s.count("1")
    if(z==len(s)):
        print(0)
    else:

        for i in range(len(s)-1):
            if(s[i]=="1" and s[i+1]=="1"):
                flaga=flaga+1
        if(flaga>=1):
            print(2)
        else:
            print(1)

