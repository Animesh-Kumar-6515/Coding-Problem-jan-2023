# WAP to check all the perfect sqare netween 1 to 50
# and also check which are not and print a suitable output



for i in range(1,51,1):
    for j in range(1,10,1):

        if (i/j==j):
            print(i,"  is a perfect sqare ")
            break
    else:
                print(i, " is not a perfect sqare")


