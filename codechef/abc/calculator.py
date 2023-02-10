
n=int(input())
while(n!=6):
    if (n == 1):
        n1 = int(input())
        n2 = int(input())
        sum = n1 + n2
        print(sum)
    elif (n == 2):
        n1 = int(input())
        n2 = int(input())
        difference = n1 - n2
        print(difference)
    elif (n == 3):
        n1 = int(input())
        n2 = int(input())
        product = n1 * n2
        print(product)
    elif (n == 4):
        n1 = int(input())
        n2 = int(input())
        quotient = n1 // n2
        print(quotient)
    elif (n == 5):
        n1 = int(input())
        n2 = int(input())
        remainder = n1 % n2
        print(remainder)
    else:
        print("Invalid Operation")
    n=int(input())