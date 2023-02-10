print("Animesh Kumar , IT2020/030 , 11700220101 ")
name_101=input("Enter your full name : ")
name2_101=input("Enter full name of your friend : ")
arr_101=""
arr2_101=""
arr3_101=""
for i in name_101:
    if i in arr_101:
        pass
    else:
        arr_101=arr_101+i+" "

for i in name2_101:
    if i in arr2_101:
        pass
    else:
        arr2_101=arr2_101+i+" "

print(arr_101)
print(arr2_101)
print()
for i in name_101:
    for j in name2_101:
        if(j==i and j not in arr3_101):
            print(j,end=" ")
            arr3_101=arr3_101+i
