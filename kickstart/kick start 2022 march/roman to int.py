def point(i):
    if (i == 'I'):
        return 1
    if (i == 'V'):
        return 5
    if (i == 'X'):
        return 10
    if (i == 'L'):
        return 50
    if (i == 'C'):
        return 100
    if (i == 'D'):
        return 500
    if (i == 'M'):
        return 1000
    return -1


def RTD(str):
    flag = 0
    i = 0

    while (i < len(str)):

        s1 = point(str[i])

        if (i + 1 < len(str)):

            s2 = point(str[i + 1])

            if (s1 >= s2):

                flag = flag + s1
                i = i + 1
            else:

                flag = flag + s2 - s1
                i = i + 2
        else:
            flag = flag + s1
            i = i + 1

    return flag


s=input()
print(RTD(s))