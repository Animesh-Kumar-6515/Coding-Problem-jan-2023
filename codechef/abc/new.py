import math

for _ in range(int(input())):
    x,a,b=map(int,input().split())
    if (b == 1):
        print(1)

    # Final result of summation
    # of divisors
    else:
        result = 0

        # find all divisors which
        # divides 'num'
        for i in range(2, (int)(math.sqrt(b)) + 1):

            # if 'i' is divisor of 'n'
            if (b % i == 0):

                # if both divisors are same
                # then add it only once
                # else add both
                if (i == (b / i)):
                    result = result + i
                else:
                    result = result + (i + b // i)

        # Add 1 and n to result as above
        # loop considers proper divisors
        # greater than 1.
        print(result + b + 1)