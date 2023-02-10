i,j,k,money,min=0
x=int(input("Enter the price of 10 mask packet"))
y=int(input("Enter the price of 5 mask packet"))
z=int(input("Enter the price of 1 mask packet"))
n=int(input("Enter the number of mask you want to buy"))
for i in range(1,n):
    for j in range(1,n):
        for k in range(1,n):
            money=((i*x)+(j*y)+(k*z))
            min = money
            if ((i*10)+(j*5)+k)==n:
                if money<=min:
                    min=money