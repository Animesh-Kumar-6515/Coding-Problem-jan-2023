import math
# bs=input()
def isprime(st):

    binary=int(st)
    binary1 = binary
    decimal, i, n = 0, 0, 0
    while (binary != 0):
        dec = binary % 10
        decimal = decimal + dec * pow(2, i)
        binary = binary // 10
        i += 1
    # print(decimal)
    flag=0
    if(decimal>1):
        for i in range(2,(decimal//2)+1):
            if(decimal%i==0):
                flag=flag+1
        if(flag==0):
            # print("prime")
            return True


    # else:
    #
    #     return False
for i in range(int(input())):
    bs=input()
    count=0
    st1=""
    for i in range(len(bs)):
        for j in range(i+1,len(bs)):
            st1=st1+bs[i:j+1]
            if(isprime(st1)):
                count=count+1

            # else:
            #     print("NO")
    if(count>=1):
        print("YES")
    else:
        print("NO")