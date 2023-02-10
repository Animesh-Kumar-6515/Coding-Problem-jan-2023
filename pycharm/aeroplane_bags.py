t=int(input())

for i in range(t):
    a = list(map(int, input().strip().split()))
    # a, b, c, d, e = list(map(int, input().split()))
    if ((((a[0]+a[1])<a[3]) and a[2]<a[4]) or (((a[0]+a[2])<a[3]) and a[1]<a[4]) or (((a[1]+a[2])<a[3]) and a[0]<a[4])):
        print("yes")
    else:
        print("no")
