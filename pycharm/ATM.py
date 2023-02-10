amount=int(input("enter the amount you want to withdraw : "))
total_amount=float(input("Enter Your bank balance : "))
balance=0.0
if(amount%5==0 and amount <= total_amount):
    balance=total_amount-amount-0.5
    print("Balance left in your account is : ",balance)
else:
    balance=total_amount
    print("Balance left in your account is : ",balance)