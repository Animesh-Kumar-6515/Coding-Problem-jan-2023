for _ in range(int(input())):
    s=input()
    sum=0
    # l=len(s)
    # word=s.split()
    word="".join(sorted(s))
    # pdrint(wor)
    for i in range(0,len(s)):
        sum=sum+((ord(word[i])-96)*(i+1))
    print(sum)
