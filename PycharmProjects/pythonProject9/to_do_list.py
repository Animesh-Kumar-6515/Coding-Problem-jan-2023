n=int(input("Enter the number of task"))
h=int(input("Enter the number of hours required for a task"))
x=int(input("Enter the number of hours required to do mundane task"))
th=n*h
if th<=x :
    print("Yes")
if th>x:
    print("NO")
    