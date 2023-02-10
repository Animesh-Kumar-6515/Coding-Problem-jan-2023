# lets make a pattern which should contain the input of users
l=[]
n=int(input("enter the number of element you want in your list - "))
for i in range(1,n+1):
    ele=input()
    l.append(ele)
print(l)
# Now we have to find which of the element is the longest element in the list
for j in range(1,n+1):
    jk=l[j]