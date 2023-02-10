str=input("Enter any string : ")
count=0
for i in str:
    if(i==" "):
        count=count+1
print("The number of word present in the string is : ",count+1)