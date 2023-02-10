n=int(input("Enter the number of your choice : "))
a = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n]
for i in range(0,n,1):
    sum=0
    for j in range(i,n,1):
        sum=sum+a[j]
        print(sum)
