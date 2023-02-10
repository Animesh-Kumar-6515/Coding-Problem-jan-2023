# WAP to print the number from 1 to 100 and skip the number which are divisible by 3 and 5

x=1
while x<=100:
    if ((x%3==0)or(x%5==0)):
        print()
    elif((x%3!=0)or(x%5!=0)):
        print(x)
    x=x+1
