def last(X, Y):

    m = len(X)
    n = len(Y)

    L = [[None] * (n + 1) for i in range(m + 1)]


    for i in range(m + 1):
        for j in range(n + 1):
            if i == 0 or j == 0:
                L[i][j] = 0
            elif X[i - 1] == Y[j - 1]:
                L[i][j] = L[i - 1][j - 1] + 1
            else:
                L[i][j] = max(L[i - 1][j], L[i][j - 1])


    return L[m][n]
s1 = input()
s2 = input()
common_letters = set(s1) & set(s2)


if (not bool(common_letters)):
    pass

s1_filt = "".join([x for x in s1 if x in common_letters])
s2_filt = "".join([x for x in s2 if x in common_letters])


print(last(s1, s2))