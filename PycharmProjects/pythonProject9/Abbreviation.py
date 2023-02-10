str1=""
name=input("Enter any name ")
x=name.split(" ")
l=len(x)
for i in range(0,l-1):
    let=list(x[i])
    for j in range(len(let)):
        if (j==0):
            str1=str1+let[j]+"."
print(str1+x[l-1])