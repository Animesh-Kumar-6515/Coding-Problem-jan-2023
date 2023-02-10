n=int(input("Enter a number : "))
new=0
while(n!=0):

    rem=n%10
    n=n//10
    new = new * 10
    new=new+rem

print("Reverse of the number is :" ,new)