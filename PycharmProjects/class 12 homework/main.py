# WAP to abbreviate the input name  Ex. Shubhash Chandra Bose -----S.C.Bose


name=input("Please enter a name   ")
print(name)

for i in range(len(name)):
    if(name[i].isupper()):
        print(name[i],end=".")