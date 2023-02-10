n=int(input("Enter the number of elements : "))
arr=list(map(int,input().split()))[:n]

arr.sort()
print("Sorted list is : ",arr)
ele=int(input("Enter the element you want to search in list : "))
min=0
mid=0
max=len(arr)-1
while min<=max:
    mid=(max+min)//2
    if(arr[mid]<ele):
        min=mid+1
    elif(arr[mid]>ele):
        max=min-1
    else:
        break
print("The element is at : ",mid+1)

