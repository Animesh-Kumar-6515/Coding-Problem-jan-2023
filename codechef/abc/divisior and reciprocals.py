import math

for _ in range(int(input())):
    x,a,b=map(int,input().split())
    resul = 0
    i=2

    # find all divisors which divides 'um'

    while i <= (math.sqrt(b)):

        # if 'i' is divisor of 'num'
        if (b % i == 0):

            # if both divisors are same then
            # add it only once else add both
            if (i == (b / i)):
                resul = resul + i
            else:
                resul = resul + (i + b / i)
    print(resul)

        i = i + 1
