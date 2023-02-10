x=int(input("Enter the number of program solved by you : "))
y=int(input("Enter your rating on codechef : "))
z=int(input("How many month back you have submitted your last code : "))
if(x>=50):
    if(y>=1600):
        if(z<=12):
            print("Here is your visa !!!")
else:
    print("Sorry we cant provide you VISA !!!")
