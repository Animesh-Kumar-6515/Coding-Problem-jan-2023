myDict={}
n=int(input("Enter number of elements: "))
for i in range(n):
    roll=int(input("Roll No.: "))
    name=input("Name= ")
    myDict[roll]=name
print("dictionary items : ",myDict)
roll=int(input("Roll No: "))
if roll in myDict.keys():
    print("key element is found")
else:
    print("key elemt is not found")
roll= int(input("Roll No.="))
del myDict[roll]
print("Dictionary items: ", myDict)