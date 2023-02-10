email=input("Enter Your Email address : ")
comp=set("@.")
flag1=0
flag2=0
for i in email:
    if(i=="@"):
        flag1=flag1+1
    if(i=="."):
        flag2=flag2+1
if(len(email)>=7 and flag2==1 and flag1==1):
    print("Valid Email")
else:
    print("Invalid Email")