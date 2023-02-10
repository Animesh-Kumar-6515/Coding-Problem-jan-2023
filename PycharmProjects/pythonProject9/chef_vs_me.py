import random
sum2=1
while sum2!=0:
        x=random.random()
        y=random.random()
        z=random.randrange(0,2,1)
        print(z)
        if (z==0):
            sum2=x+y
        else:
            sum2=x-y
        print(sum2)
        if sum2!=1:
            print("lost!!!")
        else:
            print("won!!!")
