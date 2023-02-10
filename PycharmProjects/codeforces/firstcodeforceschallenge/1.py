for _ in range(int(input())):
    s=input()
    l=len(s)
    mid=l//2
    if(l%2==0):
        # print(s[:mid],"    ",s[mid:])
        if(s[:mid]==s[mid:]):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")