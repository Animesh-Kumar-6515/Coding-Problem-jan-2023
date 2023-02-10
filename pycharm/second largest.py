n=int(input("Enter the number of elements in the list : "))
lst=list(map(int,input().split()))[:n]
lst.sort()
print("second largest number in list is : ",lst[n-2])