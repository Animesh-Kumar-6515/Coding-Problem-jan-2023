n=int(input("Enter any number : "))
sum=0
rem=0
while(n!=0):
    rem=n%10
    n=n//10
    sum=sum+rem
print("sum of the digits : ",sum)