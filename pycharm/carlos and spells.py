
n=int(input("Enter the number of test case : "))
for i in range(n):
    a,b,c=map(int, input().split())
    if(a<b and a<c):
        print(b+c)
    if(b<a and b<c):
        print(a+c)
    if(c<a and c<b):
        print(a+b)
