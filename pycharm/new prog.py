print("Animesh Kumar ,  11700220101 ")
name_101=input("Enter your full name : ")
name2_101=input("Enter full name of your best friend : ")
lst_101=" "
lst2_101=" "
lst3_101=" "
print("Unique character of your name : ")
for i in name_101:
    if i in lst_101:
        pass
    else:
        print(i,end=",")
        lst_101=lst_101+i
print()
print("Unique character of tour best friend name :")
for i in name2_101:
    if i in lst2_101:
        pass
    else:
        print(i, end=",")

        lst2_101=lst2_101+i
print()
print("Number of matched unique characters are : ")
for i in name_101:
    for j in name2_101:
        if(j==i and j not in lst3_101):
            print(j,end=",")
            lst3_101=lst3_101+i



