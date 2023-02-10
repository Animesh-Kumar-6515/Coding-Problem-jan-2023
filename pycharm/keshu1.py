marks=int(input("Enter the marks of student : "))
if(marks<120):
    print("F")
elif(marks<150 and marks>119):
    prin("D")
elif(marks<210 and marks>149):
    print("C")
elif(marks<240 and marks>209):
    print("B")
elif(marks <270 and marks >239):
    print("A")
else:
    print("S")