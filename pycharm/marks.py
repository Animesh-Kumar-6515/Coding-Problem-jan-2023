m=int(input("Enter your marks : "))
if(m<33):
    print("Your Grade is Fail ")
elif(m>=33 and m<=50):
    print("Your Grade is average")
elif(m>=51 and m<=80):
    print("Your Grade is good")
elif(m>=81 and m<=100):
    print("Your Grage is excellent")
else:
    print("Enter a valid marks")