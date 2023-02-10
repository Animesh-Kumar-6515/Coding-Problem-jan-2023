# 1,2,1,3,2,5,3,7,5,11,8,13,13,17.....
# 1,1,2,3,5,8,13....
# 2,3,5,7,11,13,17......
prime=[2,3]
flag=0
for i in range(4,1001):
    for j in range(2,i):
        if (i%j==0):
            flag=flag+1
        continue
    if flag==0:
        prime.append(i)
    flag=0
fibonacci=[1]
temp1=0
temp2=1
sum=0
for i in range(1,26):


    sum=temp1+temp2
    temp1=temp2
    temp2=sum
    fibonacci.append(sum)
#print(fibonacci)
final=[1,3]
rand=0
n=int(input("Enter any number of your choice less than 50 :"))
for i in range(1,n+1):
    if(i%2==1):
        rand=(i+1)//2
        a=fibonacci[rand]
        final.append(a)
    else:
        rand=i//2
        a=prime[rand]
        final.append(a)
#print(final)
print(final[n-1])