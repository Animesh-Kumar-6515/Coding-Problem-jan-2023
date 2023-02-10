# Given the participants' score sheet for your University Sports Day,
# you are required to find the runner-up score. You are given  scores.
# Store them in a list and find the score of the runner-up


mx=0
l=[]
n= int(input("number of elements u want in ur list - "))
for i in range(1,n+1):
    ele=int(input("enter your element - "))
    l.append(ele)
print("your list is ",l)
mx=max(l)
l.sort()
l.reverse()
for j in range(5):
    if(l[0]>l[j]):
        print("runner up score is ",l[j])
        break






