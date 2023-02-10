from functools import reduce

lst=[1,2,34,5,32,7,9,10]
even=list(filter(lambda n : n%2==0 ,lst))
print(even)

double=list(map(lambda n :n*2 , lst))
print(double)

sum=reduce(lambda a,b : a+b ,double)
print(sum)