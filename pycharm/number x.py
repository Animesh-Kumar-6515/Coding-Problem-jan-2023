n=int(input("Enter any number you want as gift : "))


x=0
sum=0
for j in range(n+1,100):
    i=j
    while (i>0):
        x=i%10
        sum=sum+x
        i=i//10
    if (sum==n):
        print("the smallest number is :",j)
        break
    sum=0
