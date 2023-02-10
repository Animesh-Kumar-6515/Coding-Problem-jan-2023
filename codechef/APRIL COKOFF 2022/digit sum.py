def digsum(x):
    sum=0
    dig=0
    while(x>0):
        dig=x%10
        sum=sum+dig
        x=x//10
    return sum
for _ in range(int(input())):
    n=int(input())
    if(digsum(n)%2==0):
        while(digsum(n)%2==0):
            n=n+1
        print(n)
    else:
        while (digsum(n) % 2 == 1):
            n = n + 1
        print(n)



