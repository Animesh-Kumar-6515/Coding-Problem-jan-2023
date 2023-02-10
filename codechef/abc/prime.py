for _ in range(int(input())):
    bs=input()
    count = 0
    st1 = ""
    flag = 0

    for i in range(len(bs)):
        for j in range(len(bs)):
            st1 = st1 + bs[i:j + 1]
            binary = int(st1)
            binary1 = binary
            decimal, i, n = 0, 0, 0
            while (binary != 0):
                dec = binary % 10
                decimal = decimal + dec * pow(2, i)
                binary = binary // 10
                i += 1
            print(decimal)

            for i in range(2, int(decimal / 2) + 1):
                if (decimal % i == 0):
                    flag = flag + 1
    if(flag<=0):

        print("Yes")
    else:
        print("NO")
