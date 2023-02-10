n=int(input("Enter any Number : "))
num=n
sum=0
while(num!=0):
    rem=num%10
    num=num//10
    sum=sum+(rem**3)
if(sum==n):
    print("The Number is an amstrong  number")
else:
    print("The number is not an amstrong number")