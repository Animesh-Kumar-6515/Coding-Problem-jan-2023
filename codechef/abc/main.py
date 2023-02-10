n=input("Enter your full name : ")
roll=input("Enter your roll number : ")
stroll=""
iroll=0
tot=0
flag=0
for i in range(len(n)):
    if(n[i]=="A" or n[i]=="a" or n[i]=="E" or n[i]=="e" or n[i]=="I" or n[i]=="i" or n[i]=="O" or n[i]=="o" or n[i]=="U" or n[i]=="u"):
        flag=flag+1
stroll=stroll+roll[7:]
iroll=int(stroll)
# print(iroll)

while(iroll>0):
    dig=iroll%10
    tot=tot+dig
    iroll=iroll//10
print("The number of vowel = ",flag)
print("The sum of roll is :",tot)