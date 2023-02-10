n=int(input())
# for t in range(n):

ar=list(map(int,input().split()))[:n]

i,j=map(int,input().split())
infinity=[]
sum=0
for m in range(100):
    infinity=infinity+ar
# print(infinity)
# for k in range(j-i+1):
#     for l in range(i)
for k in range(i-1,j):
    sum=sum+infinity[k]
print(sum)

