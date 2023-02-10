n=int(input())
a = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n]
a.sort()
print(*a,sep=" ")