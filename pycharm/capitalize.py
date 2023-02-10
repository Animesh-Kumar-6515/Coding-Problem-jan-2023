s=input()
l=len(s)
s.upper(s[0])
for i in range(0,l):
    if(s[i]==" "):
        s.upper(s[i+1])
print(s)
