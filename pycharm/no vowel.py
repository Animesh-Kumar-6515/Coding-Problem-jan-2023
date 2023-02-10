str=input("Enter your name : ")
vowel=set("aeiouAEIOU")
new_str=""
for i in str:
    if(i in vowel):
        pass
    else:
        new_str=new_str+i
print("The new name is : ",new_str)