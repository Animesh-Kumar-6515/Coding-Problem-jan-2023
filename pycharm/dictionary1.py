n=int(input("Enter the number of students : "))
print("Enter name and roll number ")
d=dict(input().split() for x in range(n))
print("{:<10} {:<10}".format("Name","Roll"))
for value in d.items():
    name,roll=value
    print("{:<10} {:<10}".format(name,roll))

